#pragma once
#include <windows.h>
#include <cstdint>

namespace offsets
{
	namespace cry_engine_offsets
	{
		namespace s_system_global_environment
		{
			extern unsigned long long address;
			extern unsigned long long get_i_game;
			extern unsigned long long get_i_system;
			extern unsigned long long get_i_renderer;
			extern unsigned long long get_i_physical_world;
			extern unsigned long long get_i_3d_engine;
			extern unsigned long long get_i_timer;
			extern unsigned long long get_i_entity_system;
		}

		namespace i_game
		{
			extern unsigned long long address;
			extern unsigned long long get_actor_script_bind;
		}

		namespace i_system
		{
			extern unsigned long long update;
		}

		namespace i_renderer
		{
			extern unsigned long long address;
			extern unsigned long long get_width;
			extern unsigned long long get_height;
			extern unsigned long long project_to_screen;
			extern unsigned long long get_client_device;
		}

		namespace c_d3d9_renderer
		{
			extern unsigned long long address;
		}

		namespace i_3d_engine
		{
			extern unsigned long long set_post_effect_param;
		}

		namespace i_timer
		{
			extern unsigned long long address;
			extern unsigned long long get_frame_time;
			extern unsigned long long get_curr_time;
		}

		namespace i_physical_world
		{
			extern unsigned long long ray_world_intersection;
			extern unsigned long long ray_world_intersection_s;
		}

		namespace srwi_params
		{
			extern unsigned long long objtypes;
		}

		namespace i_entity_system
		{
			extern unsigned long long get_entity;
			extern unsigned long long get_i_entity_iterator;
		}

		namespace i_entity_iterator
		{
			extern unsigned long long next;
		}

		namespace i_game_room
		{
			extern unsigned long long address;
			extern unsigned long long cl_fov;
			extern unsigned long long i_soundeffects;
			extern unsigned long long g_enable_idle_check;
			extern unsigned long long g_gameroom_afk_timeout;
			extern unsigned long long g_ingame_afk_timeout;
			extern unsigned long long i_pellets_disp;
			extern unsigned long long i_unlimitedammo;
			extern unsigned long long g_silencer_shoot_spotting;
			extern unsigned long long g_victory_condition;
		}

		namespace i_game_framework
		{
			extern unsigned long long address;
			extern unsigned long long get_curr_time_millis;
			extern unsigned long long get_i_game_rules;
			extern unsigned long long get_i_item_system;
			extern unsigned long long get_i_actor_system;
			extern unsigned long long get_client_actor;
		}

		namespace i_game_rules
		{
			extern unsigned long long get_team;
			extern unsigned long long get_hit_material_id;
			extern unsigned long long get_hit_type_id;
			extern unsigned long long request_hit;
			extern unsigned long long sv_request_hit;
		}

		namespace i_item_system
		{
			extern unsigned long long get_item;
			extern unsigned long long give_item;
			extern unsigned long long set_actor_item_by_name;
		}

		namespace i_actor_system
		{
			extern unsigned long long create_actor_iterator;
			extern unsigned long long get_actor;
		}

		namespace i_actor_iterator
		{
			extern unsigned long long next;
			extern unsigned long long count;
		}

		namespace i_actor
		{
			extern unsigned long long get_entity_id;
			extern unsigned long long get_health;
			extern unsigned long long set_health;
			extern unsigned long long get_max_health;
			extern unsigned long long get_armor;
			extern unsigned long long set_armor;
			extern unsigned long long get_max_armor;
			extern unsigned long long is_player;
			extern unsigned long long get_stance;
			extern unsigned long long slide_distance_mul;
			extern unsigned long long claymore_detector_radius;
			extern unsigned long long set_third_person;
			extern unsigned long long set_view_rotation;
			extern unsigned long long get_view_rotation;
			extern unsigned long long send_climb_message;
			extern unsigned long long get_c_player_rotation;
			extern unsigned long long get_i_movement_controller;
			extern unsigned long long get_i_inventory;
			extern unsigned long long get_current_item;
			extern unsigned long long get_i_entity;
		}

		namespace c_player_rotation
		{
			extern unsigned long long view_quat;
			extern unsigned long long view_quat_final;
			extern unsigned long long base_quat;
		}

		namespace i_movement_controller
		{
			extern unsigned long long get_movement_state;
		}

		namespace i_inventory
		{
			extern unsigned long long get_item;
			extern unsigned long long get_current_item_id;
		}

		namespace i_item
		{
			extern unsigned long long get_item_id;
			extern unsigned long long get_i_weapon;
			extern unsigned long long get_weapon_entity;
		}

		namespace i_weapon
		{
			extern unsigned long long firing_pos;
			extern unsigned long long firing_pos_s;
			extern unsigned long long start_fire;
			extern unsigned long long stop_fire;
			extern unsigned long long get_name;
			extern unsigned long long get_fire_mode;
			extern unsigned long long get_i_weapon_extra;
		}

		namespace i_fire_mode
		{
			extern unsigned long long is_firing;
		}

		namespace i_weapon_extra
		{
			extern unsigned long long shutter;
			extern unsigned long long weapon_state;
			extern unsigned long long get_i_weapon_extra_two;
			extern unsigned long long get_i_weapon_extra_three;
		}

		namespace i_weapon_extra_two
		{
			extern unsigned long long sway;
			extern unsigned long long weapon_map;
		}

		namespace i_weapon_extra_three
		{
			extern unsigned long long unlimited_ammo;
			extern unsigned long long ammo_count;
		}

		namespace i_entity
		{
			extern unsigned long long get_raw_id;
			extern unsigned long long get_flags;
			extern unsigned long long location;
			extern unsigned long long invalidate_tm;
			extern unsigned long long get_world_pos;
			extern unsigned long long set_local_pos;
			extern unsigned long long set_world_pos;
			extern unsigned long long get_world_bbox;
			extern unsigned long long get_name;
			extern unsigned long long get_i_entity_archetype;
			extern unsigned long long get_i_entity_render_proxy;
			extern unsigned long long get_i_entity_class;
			extern unsigned long long get_i_character_instance;
		}

		namespace i_entity_archetype
		{
			extern unsigned long long get_name;
		}

		namespace i_entity_class
		{
			extern unsigned long long get_name;
		}

		namespace i_entity_render_proxy
		{
			extern unsigned long long set_hud_silhouettes_params;
			extern unsigned long long render_flags;
		}

		namespace i_character_instance
		{
			extern unsigned long long get_i_skeleton_pose;
		}

		namespace i_skeleton_pose
		{
			extern unsigned long long get_abs_joint_by_id;
			extern unsigned long long get_joint_id_by_name;
		}

		namespace win_api
		{
			extern unsigned long long j_malloc;
			extern unsigned long long j_free;
			extern unsigned long long j_memcpy;
			extern unsigned long long j_memset;
			extern unsigned long long j_strcmp;
			extern unsigned long long j_strstr;
			extern unsigned long long j_get_async_key_state;
			extern unsigned long long j_sqrt;
			extern unsigned long long j_sinf;
			extern unsigned long long j_cosf;
			extern unsigned long long j_atoi;
			extern unsigned long long j_sleep;
		}
	}

	extern HMODULE module;
	extern size_t module_size;

	uint64_t find_signature(const char* signature, int index);
	uint64_t find_signature(const char* signature);

	void initialize();
}