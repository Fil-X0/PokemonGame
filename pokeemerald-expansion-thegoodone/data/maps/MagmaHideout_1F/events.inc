@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/MagmaHideout_1F/map.json
@

MagmaHideout_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MAGMA_MEMBER_M, 4, 5, 0, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 2, MagmaHideout_1F_EventScript_Grunt1, FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 3, 20, 0, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, MagmaHideout_1F_EventScript_ItemRareCandy, FLAG_ITEM_MAGMA_HIDEOUT_1F_RARE_CANDY
	object_event 3, OBJ_EVENT_GFX_MAGMA_MEMBER_M, 30, 20, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 4, MagmaHideout_1F_EventScript_Grunt2, FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
	object_event 4, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 5, 22, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_11
	object_event 5, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 7, 22, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_12
	object_event 6, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 6, 23, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_13

MagmaHideout_1F_MapWarps:
	warp_def 10, 34, 3, 4, MAP_JAGGED_PASS
	warp_def 25, 34, 3, 1, MAP_MAGMA_HIDEOUT_2F_1R
	warp_def 31, 3, 0, 1, MAP_MAGMA_HIDEOUT_2F_2R
	warp_def 20, 22, 0, 0, MAP_MAGMA_HIDEOUT_2F_3R

MagmaHideout_1F_MapEvents::
	map_events MagmaHideout_1F_ObjectEvents, MagmaHideout_1F_MapWarps, NULL, NULL

