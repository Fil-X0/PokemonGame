@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route125/map.json
@

Route125_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SWIMMER_M, 7, 31, 1, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT, 0, 0, TRAINER_TYPE_NORMAL, 2, Route125_EventScript_Nolen, 0
	object_event 2, OBJ_EVENT_GFX_SWIMMER_M, 45, 9, 1, MOVEMENT_TYPE_FACE_RIGHT, 2, 5, TRAINER_TYPE_NORMAL, 2, Route125_EventScript_Stan, 0
	object_event 3, OBJ_EVENT_GFX_SWIMMER_F, 38, 24, 1, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT, 6, 0, TRAINER_TYPE_NORMAL, 3, Route125_EventScript_Tanya, 0
	object_event 4, OBJ_EVENT_GFX_SWIMMER_F, 30, 28, 1, MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_DOWN_LEFT_UP, 9, 9, TRAINER_TYPE_NORMAL, 3, Route125_EventScript_Sharon, 0
	object_event 5, OBJ_EVENT_GFX_SAILOR, 21, 30, 3, MOVEMENT_TYPE_FACE_DOWN_AND_UP, 0, 0, TRAINER_TYPE_NORMAL, 2, Route125_EventScript_Ernest, 0
	object_event 6, OBJ_EVENT_GFX_LASS, 17, 19, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 1, Route125_EventScript_Kim, 0
	object_event 7, OBJ_EVENT_GFX_LASS, 18, 19, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 1, Route125_EventScript_Iris, 0
	object_event 8, OBJ_EVENT_GFX_MAN_5, 43, 19, 3, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT, 2, 1, TRAINER_TYPE_NORMAL, 3, Route125_EventScript_Presley, 0
	object_event 9, OBJ_EVENT_GFX_EXPERT_M, 48, 19, 3, MOVEMENT_TYPE_WALK_LEFT_AND_RIGHT, 2, 1, TRAINER_TYPE_NORMAL, 3, Route125_EventScript_Auron, 0
	object_event 10, OBJ_EVENT_GFX_ITEM_BALL, 46, 17, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, Route125_EventScript_ItemBigPearl, FLAG_ITEM_ROUTE_125_BIG_PEARL

Route125_MapWarps:
	warp_def 22, 19, 0, 0, MAP_SHOAL_CAVE_LOW_TIDE_ENTRANCE_ROOM

Route125_MapBGEvents:
	bg_secret_base_event 53, 10, 0, SECRET_BASE_RED_CAVE1_2
	bg_secret_base_event 55, 11, 0, SECRET_BASE_RED_CAVE4_2
	bg_secret_base_event 7, 25, 0, SECRET_BASE_YELLOW_CAVE2_2
	bg_secret_base_event 24, 32, 0, SECRET_BASE_YELLOW_CAVE4_2

Route125_MapEvents::
	map_events Route125_ObjectEvents, Route125_MapWarps, NULL, Route125_MapBGEvents

