@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/MtPyre_Exterior/map.json
@

MtPyre_Exterior_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ITEM_BALL, 27, 15, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, MtPyre_Exterior_EventScript_ItemMaxPotion, FLAG_ITEM_MT_PYRE_EXTERIOR_MAX_POTION
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 19, 40, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, MtPyre_Exterior_EventScript_ItemTMSkillSwap, FLAG_ITEM_MT_PYRE_EXTERIOR_TM_SKILL_SWAP

MtPyre_Exterior_MapWarps:
	warp_def 10, 42, 3, 1, MAP_MT_PYRE_1F
	warp_def 19, 10, 3, 1, MAP_MT_PYRE_SUMMIT
	warp_def 20, 10, 3, 1, MAP_MT_PYRE_SUMMIT

MtPyre_Exterior_MapCoordEvents:
	coord_event 24, 21, 3, TRIGGER_RUN_IMMEDIATELY, 0, MtPyre_Exterior_EventScript_FogTrigger
	coord_event 25, 21, 3, TRIGGER_RUN_IMMEDIATELY, 0, MtPyre_Exterior_EventScript_FogTrigger
	coord_event 22, 27, 3, TRIGGER_RUN_IMMEDIATELY, 0, MtPyre_Exterior_EventScript_SunTrigger
	coord_event 23, 28, 3, TRIGGER_RUN_IMMEDIATELY, 0, MtPyre_Exterior_EventScript_SunTrigger
	coord_event 26, 21, 3, TRIGGER_RUN_IMMEDIATELY, 0, MtPyre_Exterior_EventScript_FogTrigger

MtPyre_Exterior_MapBGEvents:
	bg_hidden_item_event 9, 8, 0, ITEM_ULTRA_BALL, FLAG_HIDDEN_ITEM_MT_PYRE_EXTERIOR_ULTRA_BALL
	bg_hidden_item_event 16, 22, 0, ITEM_MAX_ETHER, FLAG_HIDDEN_ITEM_MT_PYRE_EXTERIOR_MAX_ETHER

MtPyre_Exterior_MapEvents::
	map_events MtPyre_Exterior_ObjectEvents, MtPyre_Exterior_MapWarps, MtPyre_Exterior_MapCoordEvents, MtPyre_Exterior_MapBGEvents

