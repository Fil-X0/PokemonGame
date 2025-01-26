@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/GraniteCave_B2F/map.json
@

GraniteCave_B2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ITEM_BALL, 4, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, GraniteCave_B2F_EventScript_ItemRepel, FLAG_ITEM_GRANITE_CAVE_B2F_REPEL
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 29, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, GraniteCave_B2F_EventScript_ItemRareCandy, FLAG_ITEM_GRANITE_CAVE_B2F_RARE_CANDY

GraniteCave_B2F_MapWarps:
	warp_def 29, 13, 3, 2, MAP_GRANITE_CAVE_B1F
	warp_def 28, 21, 3, 3, MAP_GRANITE_CAVE_B1F
	warp_def 8, 5, 3, 4, MAP_GRANITE_CAVE_B1F
	warp_def 12, 3, 3, 5, MAP_GRANITE_CAVE_B1F
	warp_def 29, 2, 3, 6, MAP_GRANITE_CAVE_B1F

GraniteCave_B2F_MapBGEvents:
	bg_hidden_item_event 28, 6, 3, ITEM_EVERSTONE, FLAG_HIDDEN_ITEM_GRANITE_CAVE_B2F_EVERSTONE_1
	bg_hidden_item_event 10, 20, 3, ITEM_EVERSTONE, FLAG_HIDDEN_ITEM_GRANITE_CAVE_B2F_EVERSTONE_2

GraniteCave_B2F_MapEvents::
	map_events GraniteCave_B2F_ObjectEvents, GraniteCave_B2F_MapWarps, NULL, GraniteCave_B2F_MapBGEvents

