@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route113_GlassWorkshop/map.json
@

Route113_GlassWorkshop_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MAN_1, 2, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, Route113_GlassWorkshop_EventScript_GlassWorker, 0
	object_event 2, OBJ_EVENT_GFX_NINJA_BOY, 5, 4, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, Route113_GlassWorkshop_EventScript_NinjaBoy, 0

Route113_GlassWorkshop_MapWarps:
	warp_def 3, 8, 0, 0, MAP_ROUTE113
	warp_def 4, 8, 0, 0, MAP_ROUTE113

Route113_GlassWorkshop_MapEvents::
	map_events Route113_GlassWorkshop_ObjectEvents, Route113_GlassWorkshop_MapWarps, NULL, NULL

