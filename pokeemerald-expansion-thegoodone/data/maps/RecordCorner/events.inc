@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/RecordCorner/map.json
@

RecordCorner_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_LINK_RECEPTIONIST, 10, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, RecordCorner_EventScript_Attendant, 0

RecordCorner_MapWarps:
	warp_def 8, 9, 3, WARP_ID_DYNAMIC, MAP_DYNAMIC
	warp_def 9, 9, 3, WARP_ID_DYNAMIC, MAP_DYNAMIC
	warp_def 11, 9, 3, WARP_ID_DYNAMIC, MAP_DYNAMIC
	warp_def 10, 9, 3, WARP_ID_DYNAMIC, MAP_DYNAMIC

RecordCorner_MapCoordEvents:
	coord_event 6, 4, 3, VAR_TEMP_0, 0, EventScript_RecordCenter_Spot0
	coord_event 6, 6, 3, VAR_TEMP_0, 0, EventScript_RecordCenter_Spot2
	coord_event 13, 4, 3, VAR_TEMP_0, 0, EventScript_RecordCenter_Spot1
	coord_event 13, 6, 3, VAR_TEMP_0, 0, EventScript_RecordCenter_Spot3

RecordCorner_MapEvents::
	map_events RecordCorner_ObjectEvents, RecordCorner_MapWarps, RecordCorner_MapCoordEvents, NULL

