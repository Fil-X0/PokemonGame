@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SSTidalCorridor/map.json
@

SSTidalCorridor_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SAILOR, 1, 11, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, SSTidalCorridor_EventScript_ExitSailor, 0
	object_event 2, OBJ_EVENT_GFX_SAILOR, 16, 7, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 0, 2, TRAINER_TYPE_NONE, 0, SSTidalCorridor_EventScript_Sailor, 0
	object_event 3, OBJ_EVENT_GFX_EXPERT_M, 9, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SSTidalCorridor_EventScript_Briney, FLAG_HIDE_SS_TIDAL_CORRIDOR_MR_BRINEY
	object_event 4, OBJ_EVENT_GFX_WINGULL, 7, 2, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SSTidalCorridor_EventScript_Peeko, FLAG_HIDE_SS_TIDAL_CORRIDOR_MR_BRINEY
	object_event 5, OBJ_EVENT_GFX_SCOTT, 9, 10, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_SS_TIDAL_CORRIDOR_SCOTT

SSTidalCorridor_MapWarps:
	warp_def 4, 9, 3, 0, MAP_SS_TIDAL_ROOMS
	warp_def 7, 9, 3, 2, MAP_SS_TIDAL_ROOMS
	warp_def 10, 9, 3, 4, MAP_SS_TIDAL_ROOMS
	warp_def 13, 9, 3, 6, MAP_SS_TIDAL_ROOMS
	warp_def 4, 3, 3, 8, MAP_SS_TIDAL_ROOMS
	warp_def 7, 3, 3, 9, MAP_SS_TIDAL_ROOMS
	warp_def 10, 3, 3, 10, MAP_SS_TIDAL_ROOMS
	warp_def 13, 3, 3, 11, MAP_SS_TIDAL_ROOMS
	warp_def 16, 2, 3, 0, MAP_SS_TIDAL_LOWER_DECK

SSTidalCorridor_MapBGEvents:
	bg_sign_event 2, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SSTidalCorridor_EventScript_Porthole
	bg_sign_event 4, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SSTidalCorridor_EventScript_Porthole
	bg_sign_event 6, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SSTidalCorridor_EventScript_Porthole
	bg_sign_event 8, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SSTidalCorridor_EventScript_Porthole
	bg_sign_event 10, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SSTidalCorridor_EventScript_Porthole
	bg_sign_event 12, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SSTidalCorridor_EventScript_Porthole
	bg_sign_event 14, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SSTidalCorridor_EventScript_Porthole
	bg_sign_event 16, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SSTidalCorridor_EventScript_Porthole
	bg_sign_event 5, 9, 0, BG_EVENT_PLAYER_FACING_NORTH, SSTidalCorridor_EventScript_Cabin1Sign
	bg_sign_event 8, 9, 0, BG_EVENT_PLAYER_FACING_NORTH, SSTidalCorridor_EventScript_Cabin2Sign
	bg_sign_event 11, 9, 0, BG_EVENT_PLAYER_FACING_NORTH, SSTidalCorridor_EventScript_Cabin3Sign
	bg_sign_event 14, 9, 0, BG_EVENT_PLAYER_FACING_NORTH, SSTidalCorridor_EventScript_Cabin4Sign

SSTidalCorridor_MapEvents::
	map_events SSTidalCorridor_ObjectEvents, SSTidalCorridor_MapWarps, NULL, SSTidalCorridor_MapBGEvents

