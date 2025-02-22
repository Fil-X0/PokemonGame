@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/AquaHideout_B2F/map.json
@

AquaHideout_B2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_AQUA_MEMBER_M, 23, 19, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, AquaHideout_B2F_EventScript_Matt, FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
	object_event 2, OBJ_EVENT_GFX_AQUA_MEMBER_M, 23, 10, 3, MOVEMENT_TYPE_WALK_SEQUENCE_UP_LEFT_DOWN_RIGHT, 4, 3, TRAINER_TYPE_NORMAL, 3, AquaHideout_B2F_EventScript_Grunt4, FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 3, 13, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, AquaHideout_B2F_EventScript_ItemNestBall, FLAG_ITEM_AQUA_HIDEOUT_B2F_NEST_BALL
	object_event 4, OBJ_EVENT_GFX_SUBMARINE_SHADOW, 19, 20, 1, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_AQUA_HIDEOUT_B2F_SUBMARINE_SHADOW
	object_event 5, OBJ_EVENT_GFX_AQUA_MEMBER_F, 7, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 5, AquaHideout_B2F_EventScript_Grunt6, FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
	object_event 6, OBJ_EVENT_GFX_AQUA_MEMBER_M, 13, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 5, AquaHideout_B2F_EventScript_Grunt8, FLAG_HIDE_AQUA_HIDEOUT_GRUNTS

AquaHideout_B2F_MapWarps:
	warp_def 18, 1, 3, 1, MAP_AQUA_HIDEOUT_B1F
	warp_def 12, 1, 3, 2, MAP_AQUA_HIDEOUT_B1F
	warp_def 3, 3, 3, 3, MAP_AQUA_HIDEOUT_B1F
	warp_def 31, 8, 3, 5, MAP_AQUA_HIDEOUT_B2F
	warp_def 8, 8, 3, 8, MAP_AQUA_HIDEOUT_B2F
	warp_def 5, 8, 3, 3, MAP_AQUA_HIDEOUT_B2F
	warp_def 18, 13, 3, 7, MAP_AQUA_HIDEOUT_B2F
	warp_def 12, 13, 3, 6, MAP_AQUA_HIDEOUT_B2F
	warp_def 31, 17, 3, 4, MAP_AQUA_HIDEOUT_B2F
	warp_def 32, 20, 3, 4, MAP_AQUA_HIDEOUT_B1F

AquaHideout_B2F_MapCoordEvents:
	coord_event 28, 17, 3, VAR_TEMP_1, 0, AquaHideout_B2F_EventScript_MattNoticePlayer
	coord_event 28, 16, 3, VAR_TEMP_1, 0, AquaHideout_B2F_EventScript_MattNoticePlayer

AquaHideout_B2F_MapEvents::
	map_events AquaHideout_B2F_ObjectEvents, AquaHideout_B2F_MapWarps, AquaHideout_B2F_MapCoordEvents, NULL

