@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route110_TrickHousePuzzle4/map.json
@

Route110_TrickHousePuzzle4_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_GIRL_3, 2, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NORMAL, 1, Route110_TrickHousePuzzle4_EventScript_Cora, 0
	object_event 2, OBJ_EVENT_GFX_GIRL_3, 14, 7, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NORMAL, 2, Route110_TrickHousePuzzle4_EventScript_Paula, 0
	object_event 3, OBJ_EVENT_GFX_BLACK_BELT, 2, 14, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NORMAL, 2, Route110_TrickHousePuzzle4_EventScript_Yuji, 0
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 2, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, Route110_TrickHousePuzzle4_EventScript_ItemMechMail, FLAG_ITEM_TRICK_HOUSE_PUZZLE_4_MECH_MAIL
	object_event 5, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 13, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_11
	object_event 6, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 12, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_12
	object_event 7, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 5, 16, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_13
	object_event 8, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 4, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_14
	object_event 9, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 12, 2, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_15
	object_event 10, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 5, 7, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_16
	object_event 11, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 9, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_17
	object_event 12, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 10, 12, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_18
	object_event 13, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 14, 2, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_19
	object_event 14, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 10, 15, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_1A

Route110_TrickHousePuzzle4_MapWarps:
	warp_def 0, 21, 3, 2, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
	warp_def 1, 21, 3, 2, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
	warp_def 13, 1, 3, 0, MAP_ROUTE110_TRICK_HOUSE_END

Route110_TrickHousePuzzle4_MapBGEvents:
	bg_sign_event 14, 13, 0, BG_EVENT_PLAYER_FACING_ANY, Route110_TrickHousePuzzle4_EventScript_Scroll

Route110_TrickHousePuzzle4_MapEvents::
	map_events Route110_TrickHousePuzzle4_ObjectEvents, Route110_TrickHousePuzzle4_MapWarps, NULL, Route110_TrickHousePuzzle4_MapBGEvents

