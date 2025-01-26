@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FieryPath/map.json
@

FieryPath_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ITEM_BALL, 8, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, FieryPath_EventScript_ItemTMToxic, FLAG_ITEM_FIERY_PATH_TM_TOXIC
	object_event 2, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 10, 15, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_11
	object_event 3, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 17, 15, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_12
	object_event 4, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 8, 11, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_13
	object_event 5, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 3, 12, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_14
	object_event 6, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 6, 23, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_15
	object_event 7, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 5, 24, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_16
	object_event 8, OBJ_EVENT_GFX_ITEM_BALL, 7, 32, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, FieryPath_EventScript_ItemFireStone, FLAG_ITEM_FIERY_PATH_FIRE_STONE

FieryPath_MapWarps:
	warp_def 26, 36, 3, 4, MAP_ROUTE112
	warp_def 26, 4, 3, 5, MAP_ROUTE112

FieryPath_MapEvents::
	map_events FieryPath_ObjectEvents, FieryPath_MapWarps, NULL, NULL

