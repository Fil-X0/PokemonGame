@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/MtPyre_6F/map.json
@

MtPyre_6F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_HEX_MANIAC, 6, 3, 3, MOVEMENT_TYPE_ROTATE_COUNTERCLOCKWISE, 1, 1, TRAINER_TYPE_NORMAL, 3, MtPyre_6F_EventScript_Valerie, 0
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 6, 9, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, MtPyre_6F_EventScript_ItemTMShadowBall, FLAG_ITEM_MT_PYRE_6F_TM_SHADOW_BALL
	object_event 3, OBJ_EVENT_GFX_PSYCHIC_M, 10, 3, 3, MOVEMENT_TYPE_ROTATE_CLOCKWISE, 1, 1, TRAINER_TYPE_NORMAL, 3, MtPyre_6F_EventScript_Cedric, 0

MtPyre_6F_MapWarps:
	warp_def 2, 1, 3, 0, MAP_MT_PYRE_5F
	warp_def 1, 10, 3, 2, MAP_MT_PYRE_5F

MtPyre_6F_MapEvents::
	map_events MtPyre_6F_ObjectEvents, MtPyre_6F_MapWarps, NULL, NULL

