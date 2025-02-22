@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/MauvilleCity_Gym/map.json
@

MauvilleCity_Gym_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WATTSON, 5, 2, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, MauvilleCity_Gym_EventScript_Wattson, FLAG_HIDE_MAUVILLE_GYM_WATTSON
	object_event 2, OBJ_EVENT_GFX_MAN_5, 3, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NORMAL, 2, MauvilleCity_Gym_EventScript_Shawn, 0
	object_event 3, OBJ_EVENT_GFX_GIRL_3, 2, 17, 0, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NORMAL, 2, MauvilleCity_Gym_EventScript_Vivian, 0
	object_event 4, OBJ_EVENT_GFX_YOUNGSTER, 9, 12, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NORMAL, 2, MauvilleCity_Gym_EventScript_Ben, 0
	object_event 5, OBJ_EVENT_GFX_MAN_5, 0, 13, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NORMAL, 2, MauvilleCity_Gym_EventScript_Kirk, 0
	object_event 6, OBJ_EVENT_GFX_MAN_2, 7, 20, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, MauvilleCity_Gym_EventScript_GymGuide, 0
	object_event 7, OBJ_EVENT_GFX_MANIAC, 6, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 2, MauvilleCity_Gym_EventScript_Angelo, 0

MauvilleCity_Gym_MapWarps:
	warp_def 4, 20, 0, 0, MAP_MAUVILLE_CITY
	warp_def 5, 20, 0, 0, MAP_MAUVILLE_CITY

MauvilleCity_Gym_MapCoordEvents:
	coord_event 3, 9, 3, VAR_TEMP_0, 0, MauvilleCity_Gym_EventScript_Switch3
	coord_event 8, 9, 3, VAR_TEMP_0, 0, MauvilleCity_Gym_EventScript_Switch4

MauvilleCity_Gym_MapBGEvents:
	bg_sign_event 2, 18, 0, BG_EVENT_PLAYER_FACING_NORTH, MauvilleCity_Gym_EventScript_LeftGymStatue
	bg_sign_event 7, 18, 0, BG_EVENT_PLAYER_FACING_NORTH, MauvilleCity_Gym_EventScript_RightGymStatue

MauvilleCity_Gym_MapEvents::
	map_events MauvilleCity_Gym_ObjectEvents, MauvilleCity_Gym_MapWarps, MauvilleCity_Gym_MapCoordEvents, MauvilleCity_Gym_MapBGEvents

