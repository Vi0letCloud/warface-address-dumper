#include <stdio.h>
#include <chrono>

#include "offsets.h"
#include "xors.h"

class timer
{
public:
	timer() : beg_(clock_::now()) {}

	void reset()
	{ 
		beg_ = clock_::now();
	}

	double elapsed() const
	{
		return std::chrono::duration_cast<second_>(clock_::now() - beg_).count();
	}

private:
	typedef std::chrono::high_resolution_clock clock_;
	typedef std::chrono::duration<double, std::ratio<1> > second_;
	std::chrono::time_point<clock_> beg_;
};

unsigned long __stdcall main_thread(void* param)
{
	timer tmr;

	printf(xors(" > scanning started\n\n\n"));

	offsets::initialize();

	const auto elapsed = tmr.elapsed();

	printf(xors(" > scanning took %f seconds\n"), elapsed);

	return 1;
}

int __stdcall DllMain(HMODULE module, unsigned long reason, void*)
{
	if (reason == DLL_PROCESS_ATTACH)
	{
		AllocConsole();
		freopen_s(reinterpret_cast<FILE**>(stdout), xors("CONOUT$"), xors("w"), stdout);
		SetConsoleTitleA(xors("Warface Address Dumper [EU/NA 64bit]"));

		printf(xors(" > initialization started\n"));

		CreateThread(nullptr, 0, main_thread, nullptr, 0, nullptr);
	}

	if (reason == DLL_PROCESS_DETACH)
	{
		
	}

	return 1;
}