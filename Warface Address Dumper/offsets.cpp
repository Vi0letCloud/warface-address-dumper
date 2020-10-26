#include "offsets.h"
#include "xors.h"

#include <psapi.h>

namespace offsets
{
	namespace cry_engine_offsets
	{
		namespace s_system_global_environment
		{
			unsigned long long address = 0x141D73AC0; // ai_CompatibilityMode
			unsigned long long get_i_game = 0x40; // IsPlayer
			unsigned long long get_i_system = 0xE8; // GetUserName
			unsigned long long get_i_renderer = 0x48; //Draw2DLine
			unsigned long long get_i_physical_world = 0x70; // RayWorldIntersection(Game)
			unsigned long long get_i_3d_engine = 0xF8; // Dof_Active
			unsigned long long get_i_timer = 0xB8; // GetFrameTime (this + 128 at the top)
			unsigned long long get_i_entity_system = 0xD8; // GetEntity (SSGE occurence at the top)
		}

		namespace i_game
		{
			unsigned long long address = 0x141D73AC0; // Libs/UI/HUDHitIndicatorCenter.tif
			unsigned long long get_actor_script_bind = 0x290; // I don't know
		}

		namespace i_system
		{
			unsigned long long update = 0x20; // I don't know
		}

		namespace i_renderer
		{
			unsigned long long address = 0x142040978; // Copying backbuffer into texture: %s\n (top address or the one below string)
			unsigned long long get_width = 0x2D8; // GetWidth
			unsigned long long get_height = 0x2E0; // GetHeight
			unsigned long long project_to_screen = 0x320; // ProjectToScreen
			unsigned long long get_client_device = 0xA6D0; // CD3D9Renderer::RT_CreateIndexBuffer
		}

		namespace c_d3d9_renderer
		{
			unsigned long long address = 0x1420502EC; // RainDropsGen
		}

		namespace i_3d_engine
		{
			unsigned long long set_post_effect_param = 0x470; // Dof_Active
		}

		namespace i_timer
		{
			unsigned long long address = 0x1420189F8; // CD3D9Renderer::RT_EndFrame
			unsigned long long get_frame_time = 0x38; // GetFrameTime with the (0) parameter
			unsigned long long get_curr_time = 0x18; // I don't know
		}

		namespace i_physical_world
		{
			unsigned long long ray_world_intersection = 0x308; // I dont't know (changes +2 or -2
			unsigned long long ray_world_intersection_s = 0x118; // RayWorldIntersection(Game)
		}

		namespace srwi_params
		{
			unsigned long long objtypes = 0x48; // I don't know
		}

		namespace i_entity_system
		{
			unsigned long long get_entity = 0x58; // GetEntity (SSGE occurence at the top)
			unsigned long long get_i_entity_iterator = 0xA8; // GameObjectSystem (SSGE occurence at the top)
		}

		namespace i_entity_iterator
		{
			unsigned long long next = 0x30; // GameObjectSystem (for i = ...)
		}

		namespace i_game_room
		{
			unsigned long long address = 0x14207C820; // IsSameTeam, top sub in assembly
			unsigned long long cl_fov = 0x4; // cl_fov
			unsigned long long i_soundeffects = 0xE0; // i_soundeffects
			unsigned long long g_enable_idle_check = 0x168; // g_enableIdleCheck
			unsigned long long g_gameroom_afk_timeout = 0x794; // g_gameroom_afk_timeout
			unsigned long long g_ingame_afk_timeout = 0x798; // g_ingame_afk_timeout
			unsigned long long i_pellets_disp = 0x128; // i_pelletsDisp
			unsigned long long i_unlimitedammo = 0x130; // i_unlimitedammo
			unsigned long long g_silencer_shoot_spotting = 0xD60; // g_silencer_shoot_spotting
			unsigned long long g_victory_condition = 0x600; // IsSameTeam
		}

		namespace i_game_framework
		{
			unsigned long long address = 0x14207D4B8; // Failed to create the GameFramework Interface!
			unsigned long long get_curr_time_millis = 0x248; // I don't know
			unsigned long long get_i_game_rules = 0x448; // GetTeam (second offset at the top)
			unsigned long long get_i_item_system = 0xD0; // I don't know
			unsigned long long get_i_actor_system = 0xC8; // I don't know
			unsigned long long get_client_actor = 0x470; // sp_difficulty (1 line above)
		}

		namespace i_game_rules
		{
			unsigned long long get_team = 0x368; // GetTeam
			unsigned long long get_hit_material_id = 0x388; // I don't know
			unsigned long long get_hit_type_id = 0x140; // bullet (first sub)
			unsigned long long request_hit = 0x4D8; // cmd_kill
			unsigned long long sv_request_hit = 0x141247D10; // bullet
		}

		namespace i_item_system
		{
			unsigned long long get_item = 0xB0; // I don't know
			unsigned long long give_item = 0x118; // I don't know
			unsigned long long set_actor_item_by_name = 0x120; // I don't know
		}

		namespace i_actor_system
		{
			unsigned long long create_actor_iterator = 0x90; // I don't know
			unsigned long long get_actor = 0x78; // I don't know
		}

		namespace i_actor_iterator
		{
			unsigned long long next = 0x8; // I don't know
			unsigned long long count = 0x18; // I don't know
		}

		namespace i_actor
		{
			unsigned long long get_entity_id = 0x20; // GetEntityId
			unsigned long long get_health = 0xD8; // GetHealth
			unsigned long long set_health = 0xE0; // GetHealth
			unsigned long long get_max_health = 0xF8; // GetMaxHealth
			unsigned long long get_armor = 0x100; // GetArmor
			unsigned long long set_armor = 0x100; // GetArmor
			unsigned long long get_max_armor = 0xF0; // GetMaxArmor
			unsigned long long is_player = 0x230; // IsPlayer
			unsigned long long get_stance = 0x4A8; // 0x50 // GetStance
			unsigned long long slide_distance_mul = 0xFF4; // slideDistanceMult
			unsigned long long claymore_detector_radius = 0xE9C; // claymore_detector_radius
			unsigned long long set_third_person = 0x210; // I don't know
			unsigned long long set_view_rotation = 0x198; // I don't know
			unsigned long long get_view_rotation = 0x1A0; // I don't know
			unsigned long long send_climb_message = 0x141411A00; // begin (sub_... right above, sub with v3 parameter // 48 89 5C 24 10 48 89 6C 24 18 48 89 74 24 20 57 48 83 EC
			unsigned long long get_c_player_rotation = 0xD10; // FilterMaskedBlurring_Amount (last Xref, Xref of the sub, then the sub thats returning something)
			unsigned long long get_i_movement_controller = 0x1E8; // I don't know
			unsigned long long get_i_inventory = 0x1D0; // I don't know
			unsigned long long get_current_item = 0x1C8; // I don't know (maybe GetCurrentItem)
			unsigned long long get_i_entity = 0x10; // I don't know
		}

		namespace c_player_rotation
		{
			unsigned long long view_quat = 0x84; // I don't know
			unsigned long long view_quat_final = 0x94; // I don't know
			unsigned long long base_quat = 0xA4; // I don't know
		}

		namespace i_movement_controller
		{
			unsigned long long get_movement_state = 0x10; // I don't know
		}

		namespace i_inventory
		{
			unsigned long long get_item = 0x120; // I don't know
			unsigned long long get_current_item_id = 0x170; // I don't know
		}

		namespace i_item
		{
			unsigned long long get_item_id = 0x4C; // I don't know
			unsigned long long get_i_weapon = 0x278; // OffHand (offset in return of last 'if' is GetIWeapon)
			unsigned long long get_weapon_entity = 0x10; // I don't know
		}

		namespace i_weapon
		{
			unsigned long long firing_pos = 0x18; // I don't know
			unsigned long long firing_pos_s = 0x1C; // I don't know
			unsigned long long start_fire = 0x58; // CScriptBind_Weapon::AutoShoot (first below)
			unsigned long long stop_fire = 0x60; // CScriptBind_Weapon::AutoShoot (second below)
			unsigned long long get_name = 0x28; // I don't know
			unsigned long long get_fire_mode = 0xE0; // I don't know
			unsigned long long get_i_weapon_extra = 0x8; // I don't know
		}

		namespace i_fire_mode
		{
			unsigned long long is_firing = 0x118; // I don't know
		}

		namespace i_weapon_extra
		{
			unsigned long long shutter = 0xD2; // I don't know
			unsigned long long weapon_state = 0xB8; // I don't know
			unsigned long long get_i_weapon_extra_two = 0x60; // I don't know
			unsigned long long get_i_weapon_extra_three = 0x68; // I don't know
		}

		namespace i_weapon_extra_two
		{
			unsigned long long sway = 0x0; // I don't know
			unsigned long long weapon_map = 0x68; // needIcon
		}

		namespace i_weapon_extra_three
		{
			unsigned long long unlimited_ammo = 0x8; // I don't know
			unsigned long long ammo_count = 0xC; // I don't know
		}

		namespace i_entity
		{
			unsigned long long get_raw_id = 0x18; // I don't know
			unsigned long long get_flags = 0x58; // GetFlags
			unsigned long long location = 0x70; // I don't know
			unsigned long long invalidate_tm = 0x2F8; // I don't know
			unsigned long long get_world_pos = 0xB8; // GetWorldPos
			unsigned long long set_local_pos = 0xD8; // SetLocalPos
			unsigned long long set_world_pos = 0xA8; // SetWorldPos
			unsigned long long get_world_bbox = 0xC8; //GetWorldBoundsCenter (before the if ... || ...)
			unsigned long long get_name = 0x60; // GetName
			unsigned long long get_i_entity_archetype = 0x38; // I don't know
			unsigned long long get_i_entity_render_proxy = 0x1D8; // CreateRenderProxy (the first one with !)
			unsigned long long get_i_entity_class = 0x18; // GetEntityClass (call at the top without parameters)
			unsigned long long get_i_character_instance = 0x290; // RgtArm01 (v4, the first one)
		}

		namespace i_entity_archetype
		{
			unsigned long long get_name = 0x10; // 0x8 // I don't know
		}

		namespace i_entity_class
		{
			unsigned long long get_name = 0x10; // 0x8 // I don't know
		}

		namespace i_entity_render_proxy
		{
			unsigned long long set_hud_silhouettes_params = 0x160; // HudSilhouettes_Type (sub_... -> v10 + ...)
			unsigned long long render_flags = 0x24; // I don't know
		}

		namespace i_character_instance
		{
			unsigned long long get_i_skeleton_pose = 0x28; // RgtArm01 (v6, the second one)
		}

		namespace i_skeleton_pose
		{
			unsigned long long get_abs_joint_by_id = 0x38; // RgtArm01 (v7, the third one)
			unsigned long long get_joint_id_by_name = 0x18; // I don't know
		}

		namespace win_api
		{
			unsigned long long j_malloc;
			unsigned long long j_free;
			unsigned long long j_memcpy;
			unsigned long long j_memset;
			unsigned long long j_strcmp;
			unsigned long long j_strstr;
			unsigned long long j_get_async_key_state;
			unsigned long long j_sqrt;
			unsigned long long j_sinf;
			unsigned long long j_cosf;
			unsigned long long j_atoi;
			unsigned long long j_sleep;
		}
	}

	HMODULE module = nullptr;
	size_t module_size = 0;

	uintptr_t find_signature_custom_start(uintptr_t start_address, const char* signature)
	{
#define INRANGE(x,a,b)  (x >= a && x <= b) 
#define GET_BITS( x )    (INRANGE((x&(~0x20)),'A','F') ? ((x&(~0x20)) - 'A' + 0xa) : (INRANGE(x,'0','9') ? x - '0' : 0))
#define GET_BYTE( x )    (GET_BITS(x[0]) << 4 | GET_BITS(x[1]))

		uintptr_t end_eddress = (start_address + uintptr_t(module_size));

		const char* pattern = signature;
		uintptr_t first_match = 0;

		for (uintptr_t current_address = start_address; current_address < end_eddress; current_address++)
		{
			if (!*pattern)
				return first_match;

			if (*(byte*)pattern == ('\?') || *(byte*)current_address == GET_BYTE(pattern))
			{
				if (!first_match)
					first_match = current_address;

				if (!pattern[2])
					return first_match;

				if (*(uint16_t*)pattern == ('\?\?') || *(byte*)pattern != ('\?'))
					pattern += 3;
				else
					pattern += 2;
			}
			else
			{
				pattern = signature;
				first_match = 0;
			}
		}

		return 0;

#undef INRANGE
#undef GET_BITS
#undef GET_BYTE
	}

	uint64_t find_signature(const char* signature, int index)
	{
		int i = 0;

		uint64_t start_address = uint64_t(module);
		uint64_t address = 0;

		while (i < index)
		{
			start_address = find_signature_custom_start(start_address + 1, signature);
			i++;
		}

		if (i == index)
			return find_signature_custom_start(start_address + 1, signature);

		return 0;
	}

	/*
		CREDITS TO HOLLOW/NTH/NETHEE
	*/
	uint64_t find_signature(const char* signature)
	{
#define INRANGE(x,a,b)  (x >= a && x <= b) 
#define GET_BITS( x )    (INRANGE((x&(~0x20)),'A','F') ? ((x&(~0x20)) - 'A' + 0xa) : (INRANGE(x,'0','9') ? x - '0' : 0))
#define GET_BYTE( x )    (GET_BITS(x[0]) << 4 | GET_BITS(x[1]))

		uint64_t start_address = uintptr_t(module);
		uint64_t end_eddress = (start_address + uintptr_t(module_size));

		const char* pattern = signature;
		uint64_t first_match = 0;

		for (uint64_t current_address = start_address; current_address < end_eddress; current_address++)
		{
			if (!*pattern)
				return first_match;

			if (*(byte*)pattern == ('\?') || *(byte*)current_address == GET_BYTE(pattern))
			{
				if (!first_match)
					first_match = current_address;

				if (!pattern[2])
					return first_match;

				if (*(uint16_t*)pattern == ('\?\?') || *(byte*)pattern != ('\?'))
					pattern += 3;
				else
					pattern += 2;
			}
			else
			{
				pattern = signature;
				first_match = 0;
			}
		}

		return 0;

#undef INRANGE
#undef GET_BITS
#undef GET_BYTE
	}

	uint64_t get_absolute_address(uint64_t instruction_addr, uint64_t instruction_size, long relative)
	{
		return instruction_addr + relative + instruction_size;
	}

	uint64_t get_absolute_address(uint64_t instruction_addr)
	{
		if (instruction_addr < 0x1000)
			return 0;

		uint16_t instruction_size = 6;
		uint16_t offset_to_relative = 2;

		auto opcode = (unsigned char*)(instruction_addr);

		if (opcode[0] >= 0x48 && opcode[0] <= 0x4F) // 64 bit operand
		{
			instruction_size++;
			offset_to_relative++;
		}
		else if (opcode[0] == 0x80) // cmp
		{
			instruction_size = 7;
			offset_to_relative = 2;
		}
		else if (opcode[0] == 0xE8) // call
		{
			instruction_size = 5;
			offset_to_relative = 1;
		}

		return get_absolute_address(instruction_addr, instruction_size, *reinterpret_cast<long*>(instruction_addr + offset_to_relative));
	}
	/*
		NO CREDITS TO HOLLOW/NTH/NETHEE ANYMORE
	*/

	void initialize()
	{
		module = GetModuleHandleA(xors("Game.exe"));
		if (module == nullptr)
			return;

		MODULEINFO module_info;
		K32GetModuleInformation(GetCurrentProcess(), module, &module_info, sizeof(MODULEINFO));
		module_size = module_info.SizeOfImage;

		printf(xors(" > SSystemGlobalEnvironment:\n"));

		cry_engine_offsets::s_system_global_environment::address = get_absolute_address(find_signature(xors("48 8B 01 FF 90 ? ? ? ? 48 85 C0 74 11 4C 8B 00 48 8D 15 ? ? ? ?")) - 0x15);
		printf(xors(" >\t address: %p\n"), cry_engine_offsets::s_system_global_environment::address);

		cry_engine_offsets::s_system_global_environment::get_i_game = *reinterpret_cast<byte*>(find_signature(xors("48 8B 01 FF 90 ? ? ? ? 8B C3 48 8B 5C 24 ? 48 83 C4 40 5F C3 48 8B 07 48 8B CF 48 8B 5C 24 ? 48 83 C4 40 5F 48 FF 60 58")) - 0x1);
		printf(xors(" >\t IGame: %p\n"), cry_engine_offsets::s_system_global_environment::get_i_game);

		cry_engine_offsets::s_system_global_environment::get_i_system = *reinterpret_cast<int*>(find_signature(xors("48 8B 01 FF 50 60 48 89 44 24 ? 48 8D 54 24 ?")) - 0x4);
		printf(xors(" >\t ISystem: %p\n"), cry_engine_offsets::s_system_global_environment::get_i_system);

		cry_engine_offsets::s_system_global_environment::get_i_renderer = *reinterpret_cast<byte*>(find_signature(xors("4C 8B 0B 4C 8D 45 1F")) - 0xA);
		printf(xors(" >\t IRenderer: %p\n"), cry_engine_offsets::s_system_global_environment::get_i_renderer);

		cry_engine_offsets::s_system_global_environment::get_i_physical_world = *reinterpret_cast<byte*>(find_signature(xors("48 8B 01 FF 90 ? ? ? ? 48 8B 74 24 ? 0F 57 C0")) - 0x1);
		printf(xors(" >\t IPhysicalWorld: %p\n"), cry_engine_offsets::s_system_global_environment::get_i_physical_world);

		cry_engine_offsets::s_system_global_environment::get_i_3d_engine = *reinterpret_cast<int*>(find_signature(xors("48 8B 01 FF 90 ? ? ? ? 48 8B 05 ? ? ? ? 48 8D 15 ? ? ? ? F3 0F 10 54 24 ? 45 33 C9 48 8B 88 ? ? ? ? 48 8B 01 FF 90 ? ? ? ? 48 8B 05 ? ? ? ?")) - 0x4);
		printf(xors(" >\t I3DEngine: %p\n"), cry_engine_offsets::s_system_global_environment::get_i_3d_engine);

		cry_engine_offsets::s_system_global_environment::get_i_timer = *reinterpret_cast<int*>(find_signature(xors("48 8B 88 ? ? ? ? 48 89 8F ? ? ? ? 48 8B 05 ? ? ? ? 48 8B 88 ? ? ? ? 48 89 8F ? ? ? ? 49 8B CE")) + 0x3);
		printf(xors(" >\t ITimer: %p\n"), cry_engine_offsets::s_system_global_environment::get_i_timer);

		cry_engine_offsets::s_system_global_environment::get_i_entity_system = *reinterpret_cast<byte*>(find_signature(xors("48 8B 01 FF 50 58 48 85 C0 0F 84 ? ? ? ? 4C 8B 00 BA ? ? ? ? 48 8B C8 41 FF 90 ? ? ? ? 48 85 C0 0F 84 ? ? ? ? 48 8B 10 48 8B C8 FF 52 70 48 85 C0 74 7C")) - 0x4);
		printf(xors(" >\t IEntitySystem: %p\n\n"), cry_engine_offsets::s_system_global_environment::get_i_entity_system);


		printf(xors(" > IRenderer:\n"));

		cry_engine_offsets::i_renderer::address = get_absolute_address(find_signature(xors("48 8B 0D ? ? ? ? B2 01 E8 ? ? ? ? EB 3E")));
		printf(xors(" >\t address: %p\n"), cry_engine_offsets::i_renderer::address);

		cry_engine_offsets::i_renderer::project_to_screen = *reinterpret_cast<int*>(find_signature(xors("48 8B 01 FF 90 ? ? ? ? F3 0F 10 44 24 ? 48 8D 54 24 ? F3 0F 10 4C 24 ? 48 8D 4C 24 ?")) + 0x5);
		printf(xors(" >\t ProjectToScreen: %p\n"), cry_engine_offsets::i_renderer::project_to_screen);

		cry_engine_offsets::i_renderer::get_client_device = *reinterpret_cast<int*>(find_signature(xors("41 56 48 83 EC 50 48 8B 89 ? ? ? ? 41 8B F1 48 8B 84 24 ? ? ? ? 41 8B E8 8B 9C 24 ? ? ? ? 44 8B F2 48 89 44 24 ? 48 8B 84 24 ? ? ? ? 4C 8B 11 48 89 44 24 ? 89 5C 24 20 41 FF 92 ? ? ? ?")) + 0x9);
		printf(xors(" >\t ClientDevice: %p\n\n"), cry_engine_offsets::i_renderer::get_client_device);


		printf(xors(" > CD3D9Renderer:\n"));

		cry_engine_offsets::c_d3d9_renderer::address = get_absolute_address(find_signature(xors("48 8D 15 ? ? ? ? 41 B8 ? ? ? ? E8 ? ? ? ? 48 8B 0D ? ? ? ? 45 33 C9 BA ? ? ? ? 48 8B 01 45 8D 41 FF FF 90 ? ? ? ? 48 8B 05 ? ? ? ? BA ? ? ? ? 41 B8 ? ? ? ?")));
		printf(xors(" >\t address: %p\n\n"), cry_engine_offsets::c_d3d9_renderer::address);


		printf(xors(" > I3DEngine:\n"));

		cry_engine_offsets::i_3d_engine::set_post_effect_param = *reinterpret_cast<int*>(find_signature(xors("48 8B 01 FF 90 ? ? ? ? 48 8B 05 ? ? ? ? 48 8D 15 ? ? ? ? F3 0F 10 54 24 ? 45 33 C9 48 8B 88 ? ? ? ? 48 8B 01 FF 90 ? ? ? ? 48 8B 05 ? ? ? ?")) + 0x5);
		printf(xors(" >\t SetPostEffectParam: %p\n\n"), cry_engine_offsets::i_3d_engine::set_post_effect_param);


		printf(xors(" > ITimer:\n"));

		cry_engine_offsets::i_timer::address = get_absolute_address(find_signature(xors("48 8B 0D ? ? ? ? 48 8D 94 24 ? ? ? ? 89 1D ? ? ? ?")));
		printf(xors(" >\t address: %p\n"), cry_engine_offsets::i_timer::address);

		cry_engine_offsets::i_timer::get_frame_time = *reinterpret_cast<byte*>(find_signature(xors("48 8B 01 FF 50 38 48 8B 03 48 8D 54 24 ? 48 8B CB")) + 0x5);
		printf(xors(" >\t GetFrameTime: %p\n\n"), cry_engine_offsets::i_timer::get_frame_time);


		printf(xors(" > IPhysicalWorld:\n"));

		cry_engine_offsets::i_physical_world::ray_world_intersection_s = *reinterpret_cast<int*>(find_signature(xors("48 8B 01 FF 90 ? ? ? ? 48 8B 74 24 ? 0F 57 C0")) + 0x5);
		printf(xors(" >\t RayWorldIntersection: %p\n\n"), cry_engine_offsets::i_physical_world::ray_world_intersection_s);


		printf(xors(" > IEntitySystem:\n"));

		cry_engine_offsets::i_entity_system::get_entity = *reinterpret_cast<byte*>(find_signature(xors("48 8B 01 FF 50 58 48 85 C0 0F 84 ? ? ? ? 4C 8B 00 BA ? ? ? ? 48 8B C8 41 FF 90 ? ? ? ? 48 85 C0 0F 84 ? ? ? ? 48 8B 10 48 8B C8 FF 52 70 48 85 C0 74 7C")) + 0x5);
		printf(xors(" >\t GetEntity: %p\n"), cry_engine_offsets::i_entity_system::get_entity);

		cry_engine_offsets::i_entity_system::get_i_entity_iterator = *reinterpret_cast<int*>(find_signature(xors("48 8B 01 FF 90 ? ? ? ? 48 8B D8 48 85 C0 74 09 48 8B 00 48 8B CB FF 50 08 48 8B 03 48 8B CB FF 50 30 48 85 C0 74 32 4C 8B 00 BA ? ? ? ? 48 8B C8 41 FF 90 ? ? ? ? 48 85 C0 74 0D 4C 8B 00")) + 0x5);
		printf(xors(" >\t GetEntityIterator: %p\n\n"), cry_engine_offsets::i_entity_system::get_i_entity_iterator);


		printf(xors(" > IEntityIterator:\n"));

		cry_engine_offsets::i_entity_iterator::next = *reinterpret_cast<byte*>(find_signature(xors("48 8B 03 48 8B CB FF 50 30 48 85 C0 74 32 4C 8B 00 BA ? ? ? ? 48 8B C8 41 FF 90 ? ? ? ? 48 85 C0 74 0D 4C 8B 00")) + 0x8);
		printf(xors(" >\t Next: %p\n\n"), cry_engine_offsets::i_entity_iterator::next);


		printf(xors(" > IGame:\n"));

		cry_engine_offsets::i_game::address = get_absolute_address(find_signature(xors("48 8B 0D ? ? ? ? 4C 8D 0D ? ? ? ? 4C 8D 05 ? ? ? ?")));
		printf(xors(" >\t address: %p\n\n"), cry_engine_offsets::i_game::address);


		printf(xors(" > SCVars:\n"));
		
		cry_engine_offsets::i_game_room::address = get_absolute_address(find_signature(xors("57 48 83 EC 20 48 8B 05 ? ? ? ? 48 8B F9 41 8B F0 8B DA")) + 0x5);
		printf(xors(" >\t address: %p\n"), cry_engine_offsets::i_game_room::address);

		cry_engine_offsets::i_game_room::cl_fov = *reinterpret_cast<byte*>(find_signature(xors("48 8B 01 4C 8D 43 04 C6 44 24 ? ? 48 8D 15 ? ? ? ? 48 89 74 24 ?")) + 0x6);
		printf(xors(" >\t cl_fov: %p\n"), cry_engine_offsets::i_game_room::cl_fov);

		cry_engine_offsets::i_game_room::i_soundeffects = *reinterpret_cast<int*>(find_signature(xors("4C 8D 83 ? ? ? ? C6 44 24 ? ? 48 8D 15 ? ? ? ? 48 89 74 24 ? 41 B9 ? ? ? ? 48 89 74 24 ? C7 44 24 ? ? ? ? ? FF 50 38 48 8B 05 ? ? ? ? 48 8B 88 ? ? ? ? 48 85 C9 74 38")) + 0x3);
		printf(xors(" >\t i_soundeffects: %p\n"), cry_engine_offsets::i_game_room::i_soundeffects);

		cry_engine_offsets::i_game_room::g_enable_idle_check = *reinterpret_cast<int*>(find_signature(xors("4C 8D 83 ? ? ? ? C6 44 24 ? ? 48 8D 15 ? ? ? ? 48 89 74 24 ? 41 B9 ? ? ? ? 48 89 74 24 ? 89 74 24 20 FF 50 38 48 8B 05 ? ? ? ? 48 8B 88 ? ? ? ? 48 85 C9 74 31 48 8B 01"), 4) + 0x3);
		printf(xors(" >\t g_enableIdleCheck: %p\n"), cry_engine_offsets::i_game_room::g_enable_idle_check);

		cry_engine_offsets::i_game_room::g_gameroom_afk_timeout = *reinterpret_cast<int*>(find_signature(xors("4C 8D 83 ? ? ? ? C6 44 24 ? ? 48 8D 15 ? ? ? ? 48 89 74 24 ? 41 B9 ? ? ? ? 48 89 74 24 ? C7 44 24 ? ? ? ? ? FF 50 38 48 8B 05 ? ? ? ? 48 8B 88 ? ? ? ? 48 85 C9 74 38"), 13) + 0x3);
		printf(xors(" >\t g_gameroom_afk_timeout: %p\n"), cry_engine_offsets::i_game_room::g_gameroom_afk_timeout);

		cry_engine_offsets::i_game_room::g_ingame_afk_timeout = *reinterpret_cast<int*>(find_signature(xors("4C 8D 83 ? ? ? ? C6 44 24 ? ? 48 8D 15 ? ? ? ? 48 89 74 24 ? 41 B9 ? ? ? ? 48 89 74 24 ? C7 44 24 ? ? ? ? ? FF 50 38 48 8B 05 ? ? ? ? 48 8B 88 ? ? ? ? 48 85 C9 74 35"), 5) + 0x3);
		printf(xors(" >\t g_ingame_afk_timeout: %p\n"), cry_engine_offsets::i_game_room::g_ingame_afk_timeout);

		cry_engine_offsets::i_game_room::i_pellets_disp = *reinterpret_cast<int*>(find_signature(xors("4C 8D 83 ? ? ? ? C6 44 24 ? ? 48 8D 15 ? ? ? ? 48 89 74 24 ? 41 0F 28 D9 48 89 74 24 ? 89 74 24 20 FF 50 40 48 8B 05 ? ? ? ? 48 8B 88 ? ? ? ? 48 85 C9 74 36 48 8B 01 4C 8D 83 ? ? ? ?")) + 0x3);
		printf(xors(" >\t i_pelletsDisp: %p\n"), cry_engine_offsets::i_game_room::i_pellets_disp);

		cry_engine_offsets::i_game_room::i_unlimitedammo = *reinterpret_cast<int*>(find_signature(xors("4C 8D 83 ? ? ? ? C6 44 24 ? ? 48 8D 15 ? ? ? ? 48 89 74 24 ? 45 33 C9 48 89 74 24 ? 89 74 24 20 FF 50 38 48 8B 05 ? ? ? ? 48 8B 88 ? ? ? ? F3 0F 10 35 ? ? ? ?")) + 0x3);
		printf(xors(" >\t i_unlimitedammo: %p\n"), cry_engine_offsets::i_game_room::i_unlimitedammo);

		cry_engine_offsets::i_game_room::g_silencer_shoot_spotting = *reinterpret_cast<int*>(find_signature(xors("4C 8D 83 ? ? ? ? C6 44 24 ? ? 48 8D 15 ? ? ? ? 48 89 74 24 ? 45 33 C9 48 89 74 24 ? 89 74 24 20 FF 50 38 48 8B 05 ? ? ? ? 48 8B 88 ? ? ? ? 48 85 C9 74 31 48 8B 01 4C 8D 83 ? ? ? ?"), 38) + 0x3);
		printf(xors(" >\t g_silencer_shoot_spotting: %p\n"), cry_engine_offsets::i_game_room::g_silencer_shoot_spotting);

		cry_engine_offsets::i_game_room::g_victory_condition = *reinterpret_cast<int*>(find_signature(xors("8B 88 ? ? ? ? 83 F9 0B 0F 87 ? ? ? ?")) + 0x2);
		printf(xors(" >\t g_victoryCondition: %p\n\n"), cry_engine_offsets::i_game_room::g_victory_condition);


		printf(xors(" > IGameFramework:\n"));

		cry_engine_offsets::i_game_framework::address = get_absolute_address(find_signature(xors("48 85 C0 75 0C 48 8D 0D ? ? ? ? E9 ? ? ? ? C6 05 ? ? ? ? ?")) - 0x7);
		printf(xors(" >\t address: %p\n"), cry_engine_offsets::i_game_framework::address);

		cry_engine_offsets::i_game_framework::get_i_game_rules = *reinterpret_cast<int*>(find_signature(xors("49 8B D8 48 8B FA 48 8B 01 FF 90 ? ? ? ? 48 8B C8 48 85 C0 75 14")) + 0xB);
		printf(xors(" >\t GetCurrentGameRules: %p\n"), cry_engine_offsets::i_game_framework::get_i_game_rules);

		cry_engine_offsets::i_game_framework::get_client_actor = *reinterpret_cast<int*>(find_signature(xors("48 8B C8 4C 8B 00 41 FF 90 ? ? ? ? 48 8B 07 48 8D 15 ? ? ? ?")) + 0x9);
		printf(xors(" >\t GetClientActor: %p\n\n"), cry_engine_offsets::i_game_framework::get_client_actor);


		printf(xors(" > IGameRules:\n"));

		cry_engine_offsets::i_game_rules::get_team = *reinterpret_cast<int*>(find_signature(xors("48 8B 00 8B D3 C7 44 24 ? ? ? ? ?")) + 0xF);
		printf(xors(" >\t GetTeam: %p\n"), cry_engine_offsets::i_game_rules::get_team);

		cry_engine_offsets::i_game_rules::sv_request_hit = find_signature(xors("40 55 53 56 57 41 56 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ? 48 8B F1"));
		printf(xors(" >\t SvRequestHit: %p\n\n"), cry_engine_offsets::i_game_rules::sv_request_hit);


		printf(xors(" > IActor:\n"));

		cry_engine_offsets::i_actor::get_health = *reinterpret_cast<int*>(find_signature(xors("FF 92 ? ? ? ? 48 8D 54 24 ? 48 8B CF 66 0F 6E C0 48 8B 07 0F 5B C0 F3 0F 11 44 24 ? FF 50 50 8B 4C 24 20 8B D8 83 F9 06 75 1D 48 8B 4C 24 ? 48 85 C9 74 36 48 8B 11 FF 52 18 8B C3 48 8B 5C 24 ?")) + 0x2);
		printf(xors(" >\t GetHealth: %p\n"), cry_engine_offsets::i_actor::get_health);

		cry_engine_offsets::i_actor::get_max_health = *reinterpret_cast<int*>(find_signature(xors("FF 92 ? ? ? ? 48 8D 54 24 ? 48 8B CF 66 0F 6E C0 48 8B 07 0F 5B C0 F3 0F 11 44 24 ? FF 50 50 8B 4C 24 20 8B D8 83 F9 06 75 1D 48 8B 4C 24 ? 48 85 C9 74 36 48 8B 11 FF 52 18 8B C3 48 8B 5C 24 ?"), 1) + 0x2);
		printf(xors(" >\t GetMaxHealth: %p\n"), cry_engine_offsets::i_actor::get_max_health);

		cry_engine_offsets::i_actor::set_health = *reinterpret_cast<int*>(find_signature(xors("41 FF 90 ? ? ? ? 48 8B 07 48 8B CF 48 8B 5C 24 ? 0F 28 74 24 ? 48 83 C4 30 5F 48 FF 60 58")) + 0x3);
		printf(xors(" >\t SetHealth: %p\n"), cry_engine_offsets::i_actor::set_health);

		cry_engine_offsets::i_actor::get_armor = *reinterpret_cast<int*>(find_signature(xors("FF 92 ? ? ? ? 48 8D 54 24 ? 48 8B CF 66 0F 6E C0 48 8B 07 0F 5B C0 F3 0F 11 44 24 ? FF 50 50 8B 4C 24 20 8B D8 83 F9 06 75 1D 48 8B 4C 24 ? 48 85 C9 74 36 48 8B 11 FF 52 18 8B C3 48 8B 5C 24 ?"), 2) + 0x2);
		printf(xors(" >\t GetArmor: %p\n"), cry_engine_offsets::i_actor::get_armor);

		cry_engine_offsets::i_actor::get_max_armor = *reinterpret_cast<int*>(find_signature(xors("FF 92 ? ? ? ? 48 8D 54 24 ? 48 8B CF 66 0F 6E C0 48 8B 07 0F 5B C0 F3 0F 11 44 24 ? FF 50 50 8B 4C 24 20 8B D8 83 F9 06 75 1D 48 8B 4C 24 ? 48 85 C9 74 36 48 8B 11 FF 52 18 8B C3 48 8B 5C 24 ?"), 3) + 0x2);
		printf(xors(" >\t GetMaxArmor: %p\n"), cry_engine_offsets::i_actor::get_max_armor);

		cry_engine_offsets::i_actor::set_armor = *reinterpret_cast<int*>(find_signature(xors("41 FF 90 ? ? ? ? 48 8B 07 48 8B CF 48 8B 5C 24 ? 0F 28 74 24 ? 48 83 C4 30 5F 48 FF 60 58"), 1) + 0x3);
		printf(xors(" >\t SetHealth: %p\n"), cry_engine_offsets::i_actor::set_armor);

		cry_engine_offsets::i_actor::is_player = *reinterpret_cast<int*>(find_signature(xors("48 8B 10 48 8B C8 FF 92 ? ? ? ? 84 C0 74 7C F3 0F 10 05 ? ? ? ?")) + 0x8);
		printf(xors(" >\t IsPlayer: %p\n"), cry_engine_offsets::i_actor::is_player);

		cry_engine_offsets::i_actor::send_climb_message = find_signature(xors("41 88 81 ? ? ? ? 49 8B C1")) + 0x1F;
		printf(xors(" >\t SvClimbMessage: %p\n\n"), cry_engine_offsets::i_actor::send_climb_message);


		printf(xors(" > IItem:\n"));

		cry_engine_offsets::i_item::get_i_weapon = *reinterpret_cast<int*>(find_signature(xors("48 8B 10 48 8B C8 FF 92 ? ? ? ? EB 02 33 C0 4C 8B 7C 24 ?")) + 0x8);
		printf(xors(" >\t GetIWeapon: %p\n\n"), cry_engine_offsets::i_item::get_i_weapon);


		printf(xors(" > IWeapon:\n"));

		cry_engine_offsets::i_weapon::start_fire = *reinterpret_cast<byte*>(find_signature(xors("48 8B 07 4C 8D 05 ? ? ? ? 48 8B CF")) + 0x18);
		printf(xors(" >\t StartFire: %p\n"), cry_engine_offsets::i_weapon::start_fire);

		cry_engine_offsets::i_weapon::stop_fire = *reinterpret_cast<byte*>(find_signature(xors("48 8B 07 4C 8D 05 ? ? ? ? 48 8B CF")) + 0x21);
		printf(xors(" >\t StopFire: %p\n\n"), cry_engine_offsets::i_weapon::stop_fire);


		printf(xors(" > IEntity:\n"));

		uint64_t set_pos = *reinterpret_cast<int*>(find_signature(xors("FF 90 ? ? ? ? 48 8B 03 48 8B CB FF 50 58 48 8B 5C 24 ? 48 8B 74 24 ? 48 83 C4 50 5F C3")) + 0x2);
		printf(xors(" >\t SetPos: %p\n"), set_pos);

		uint64_t set_angles = *reinterpret_cast<int*>(find_signature(xors("FF 90 ? ? ? ? 48 8B 03 48 8B CB 44 0F 28 54 24 ?")) + 0x2);
		printf(xors(" >\t SetAngles: %p\n"), set_angles);

		uint64_t set_scale = *reinterpret_cast<int*>(find_signature(xors("FF 90 ? ? ? ? 48 8B 03 48 8B CB 0F 28 74 24 ? 48 83 C4 40 5B 48 FF 60 58")) + 0x2);
		printf(xors(" >\t SetScale: %p\n"), set_scale);

		uint64_t get_angles = *reinterpret_cast<int*>(find_signature(xors("FF 90 ? ? ? ? 48 8B D0 48 8D 4C 24 ? E8 ? ? ? ? 48 8B D0 48 8D 4C 24 ?")) + 0x2);
		printf(xors(" >\t GetAngles: %p\n"), get_angles);

		uint64_t get_scale = *reinterpret_cast<int*>(find_signature(xors("FF 90 ? ? ? ? 48 8D 54 24 ? 48 8B CB F3 0F 10 00 48 8B 03 F3 0F 11 44 24 ? FF 50 50 8B 4C 24 20 8B D8 83 F9 06 75 18 48 8B 4C 24 ? 48 85 C9 74 31 48 8B 11 FF 52 18 8B C3 48 83 C4 40 5B")) + 0x2);
		printf(xors(" >\t GetScale: %p\n"), get_scale);

		cry_engine_offsets::i_entity::get_flags = *reinterpret_cast<byte*>(find_signature(xors("48 8B 00 C7 44 24 ? ? ? ? ? FF 50 30 48 8D 54 24 ? 48 8B CB 66 0F 6E C0")) + 0xD);
		printf(xors(" >\t GetFlags: %p\n"), cry_engine_offsets::i_entity::get_flags);

		cry_engine_offsets::i_entity::get_world_pos = *reinterpret_cast<int*>(find_signature(xors("48 8B 00 FF 90 ? ? ? ? 41 B9 ? ? ? ? 48 8D 54 24 ? 4C 8B C3 48 8D 4C 24 ? F3 0F 10 40 ? F3 0F 10 48 ? F3 0F 11 44 24 ? F3 0F 10 40 ? F3 0F 11 44 24 ? F3 0F 11 4C 24 ? E8 ? ? ? ?")) + 0x5);
		printf(xors(" >\t GetWorldPos: %p\n"), cry_engine_offsets::i_entity::get_world_pos);

		cry_engine_offsets::i_entity::get_world_bbox = *reinterpret_cast<int*>(find_signature(xors("48 8B 00 48 8D 54 24 ? 48 8B CB FF 90 ? ? ? ? F3 0F 10 44 24 ?")) + 0xD);
		printf(xors(" >\t GetWorldBBox: %p\n"), cry_engine_offsets::i_entity::get_world_bbox);

		cry_engine_offsets::i_entity::get_name = *reinterpret_cast<byte*>(find_signature(xors("FF 50 60 48 89 44 24 ? 48 8D 54 24 ? 48 8B 03 48 8B CB FF 50 50 8B 4C 24 20 8B D8 83 F9 06 75 1D")) + 0x2);
		printf(xors(" >\t GetName: %p\n"), cry_engine_offsets::i_entity::get_name);

		cry_engine_offsets::i_entity::get_i_entity_render_proxy = *reinterpret_cast<int*>(find_signature(xors("48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC 20 48 8B 02 48 8B DA 41 8B D0")) + 0x20);
		printf(xors(" >\t GetEntityRenderProxy: %p\n"), cry_engine_offsets::i_entity::get_i_entity_render_proxy);

		cry_engine_offsets::i_entity::get_i_entity_class = *reinterpret_cast<byte*>(find_signature(xors("FF 50 18 EB 23 83 F9 07 75 1E 48 8B 54 24 ? 48 85 D2 74 14 48 8B 05 ? ? ? ? 48 8B 48 40 48 8B 01 FF 90 ? ? ? ? 48 8B 05 ? ? ? ? 8B D3 48 8B 88 ? ? ? ? 48 8B 01 FF 50 58 48 85 C0")) + 0x2);
		printf(xors(" >\t GetEntityClass: %p\n"), cry_engine_offsets::i_entity::get_i_entity_class);

		cry_engine_offsets::i_entity::get_i_character_instance = *reinterpret_cast<int*>(find_signature(xors("44 0F 28 CA 48 8B 02")) + 0x12);
		printf(xors(" >\t GetCharacter: %p\n\n"), cry_engine_offsets::i_entity::get_i_character_instance);


		printf(xors(" > IEntityRenderProxy:\n"));

		cry_engine_offsets::i_entity_render_proxy::set_hud_silhouettes_params = *reinterpret_cast<int*>(find_signature(xors("85 ED 74 05 83 FD 03")) - 0x4);
		printf(xors(" >\t SetHUDSilhouettesParams: %p\n\n"), cry_engine_offsets::i_entity_render_proxy::set_hud_silhouettes_params);


		printf(xors(" > ICharacterInstance:\n"));

		cry_engine_offsets::i_character_instance::get_i_skeleton_pose = *reinterpret_cast<byte*>(find_signature(xors("48 8B C8 48 8B F8 4C 8B 00 41 FF 50 28")) + 0xC);
		printf(xors(" >\t GetISkeletonPose: %p\n\n"), cry_engine_offsets::i_character_instance::get_i_skeleton_pose);


		printf(xors(" > ISkeletonPose:\n"));

		cry_engine_offsets::i_skeleton_pose::get_abs_joint_by_id = *reinterpret_cast<byte*>(find_signature(xors("33 D2 48 8B C8 4C 8B 00 41 FF 50 38 48 8B 17")) + 0xB);
		printf(xors(" >\t GetAbsJointByID: %p\n\n\n"), cry_engine_offsets::i_skeleton_pose::get_abs_joint_by_id);


		printf(xors(" > WinAPI:\n"));

		cry_engine_offsets::win_api::j_malloc = get_absolute_address(find_signature(xors("E8 ? ? ? ? 48 8B F0 48 85 C0 75 08 8D 58 0D")));
		printf(xors(" >\t j_malloc: %p\n"), cry_engine_offsets::win_api::j_malloc);

		cry_engine_offsets::win_api::j_free = get_absolute_address(find_signature(xors("E8 ? ? ? ? 49 89 1C 2E")));
		printf(xors(" >\t j_free: %p\n"), cry_engine_offsets::win_api::j_free);

		cry_engine_offsets::win_api::j_memcpy = get_absolute_address(find_signature(xors("E8 ? ? ? ? 48 8D 4F 20 41 8B D4")));
		printf(xors(" >\t j_memcpy: %p\n"), cry_engine_offsets::win_api::j_memcpy);

		cry_engine_offsets::win_api::j_memset = get_absolute_address(find_signature(xors("E8 ? ? ? ? 33 C0 48 83 C4 20 5F")));
		printf(xors(" >\t j_memset: %p\n"), cry_engine_offsets::win_api::j_memset);

		cry_engine_offsets::win_api::j_strcmp = get_absolute_address(find_signature(xors("E8 ? ? ? ? 85 C0 74 0F 0F B7 4F 58")));
		printf(xors(" >\t j_strcmp: %p\n"), cry_engine_offsets::win_api::j_strcmp);

		cry_engine_offsets::win_api::j_strstr = get_absolute_address(find_signature(xors("E8 ? ? ? ? 33 FF 0F B6 DB")));
		printf(xors(" >\t j_strstr: %p\n"), cry_engine_offsets::win_api::j_strstr);

		cry_engine_offsets::win_api::j_get_async_key_state = get_absolute_address(find_signature(xors("E8 ? ? ? ? A8 01 74 07 B0 01")));
		printf(xors(" >\t j_GetAsyncKeyState: %p\n"), cry_engine_offsets::win_api::j_get_async_key_state);

		cry_engine_offsets::win_api::j_sqrt = get_absolute_address(find_signature(xors("E8 ? ? ? ? F2 41 0F 58 C0 E8 ? ? ? ? 66 41 0F 57 C2 EB 0F E8 ? ? ? ? F2 41 0F 58 C0 E8 ? ? ? ? 48 8B 95 ? ? ? ?")));
		printf(xors(" >\t j_sqrt: %p\n"), cry_engine_offsets::win_api::j_sqrt);

		cry_engine_offsets::win_api::j_sinf = get_absolute_address(find_signature(xors("E8 ? ? ? ? 80 7F 38 00 44 0F 28 C0 74 2A")));
		printf(xors(" >\t j_sinf: %p\n"), cry_engine_offsets::win_api::j_sinf);

		cry_engine_offsets::win_api::j_cosf = get_absolute_address(find_signature(xors("E8 ? ? ? ? 0F 28 F8 0F 28 C6 E8 ? ? ? ? 80 7F 38 00")));
		printf(xors(" >\t j_cosf: %p\n"), cry_engine_offsets::win_api::j_cosf);

		cry_engine_offsets::win_api::j_atoi = get_absolute_address(find_signature(xors("E8 ? ? ? ? F7 D8 1B C9")));
		printf(xors(" >\t j_atoi: %p\n"), cry_engine_offsets::win_api::j_atoi);

		cry_engine_offsets::win_api::j_sleep = get_absolute_address(find_signature(xors("E8 ? ? ? ? 4C 8B BC 24 ? ? ? ? 4C 8B B4 24 ? ? ? ? 48 8B B4 24 ? ? ? ? 0F 28 74 24 ?")));
		printf(xors(" >\t j_Sleep: %p\n\n"), cry_engine_offsets::win_api::j_sleep);
	}
}