@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/GraniteCave_B1F/map.json
@

GraniteCave_B1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ITEM_BALL, 15, 21, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, GraniteCave_B1F_EventScript_ItemPokeBall, FLAG_ITEM_GRANITE_CAVE_B1F_POKE_BALL

GraniteCave_B1F_MapWarps:
	warp_def 25, 13, 3, 1, MAP_GRANITE_CAVE_1F
	warp_def 4, 21, 3, 2, MAP_GRANITE_CAVE_1F
	warp_def 29, 13, 3, 0, MAP_GRANITE_CAVE_B2F
	warp_def 28, 21, 3, 1, MAP_GRANITE_CAVE_B2F
	warp_def 8, 5, 3, 2, MAP_GRANITE_CAVE_B2F
	warp_def 12, 3, 3, 3, MAP_GRANITE_CAVE_B2F
	warp_def 29, 2, 3, 4, MAP_GRANITE_CAVE_B2F

GraniteCave_B1F_MapEvents::
	map_events GraniteCave_B1F_ObjectEvents, GraniteCave_B1F_MapWarps, NULL, NULL

