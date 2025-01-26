@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route106/map.json
@

Route106_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SWIMMER_M, 18, 5, 1, MOVEMENT_TYPE_WALK_LEFT_AND_RIGHT, 4, 0, TRAINER_TYPE_NORMAL, 3, Route106_EventScript_Douglas, 0
	object_event 2, OBJ_EVENT_GFX_SWIMMER_F, 29, 10, 1, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NORMAL, 3, Route106_EventScript_Kyla, 0
	object_event 3, OBJ_EVENT_GFX_TUCKER, 51, 16, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NORMAL, 3, Route106_EventScript_Elliot, 0
	object_event 4, OBJ_EVENT_GFX_FISHERMAN, 59, 12, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NORMAL, 5, Route106_EventScript_Ned, 0
	object_event 5, OBJ_EVENT_GFX_ITEM_BALL, 29, 14, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, Route106_EventScript_ItemProtein, FLAG_ITEM_ROUTE_106_PROTEIN

Route106_MapWarps:
	warp_def 48, 16, 0, 0, MAP_GRANITE_CAVE_1F

Route106_MapBGEvents:
	bg_hidden_item_event 41, 11, 3, ITEM_DIVE_BALL, FLAG_HIDDEN_ITEM_ROUTE_106_POKE_BALL
	bg_hidden_item_event 68, 15, 0, ITEM_STARDUST, FLAG_HIDDEN_ITEM_ROUTE_106_STARDUST
	bg_hidden_item_event 51, 15, 3, ITEM_HEART_SCALE, FLAG_HIDDEN_ITEM_ROUTE_106_HEART_SCALE

Route106_MapEvents::
	map_events Route106_ObjectEvents, Route106_MapWarps, NULL, Route106_MapBGEvents

