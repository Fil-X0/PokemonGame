@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route102/map.json
@

Route102_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_LITTLE_BOY, 18, 11, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, Route102_EventScript_LittleBoy, 0
	object_event 2, OBJ_EVENT_GFX_YOUNGSTER, 33, 14, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NORMAL, 3, Route102_EventScript_Calvin, 0
	object_event 3, OBJ_EVENT_GFX_BUG_CATCHER, 25, 15, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NORMAL, 2, Route102_EventScript_Rick, 0
	object_event 4, OBJ_EVENT_GFX_LASS, 13, 6, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NORMAL, 4, Route102_EventScript_Tiana, 0
	object_event 5, OBJ_EVENT_GFX_BOY_1, 37, 4, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, Route102_EventScript_Boy, 0
	object_event 6, OBJ_EVENT_GFX_ITEM_BALL, 11, 15, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, Route102_EventScript_ItemPotion, FLAG_ITEM_ROUTE_102_POTION
	object_event 7, OBJ_EVENT_GFX_BERRY_TREE, 24, 2, 3, MOVEMENT_TYPE_BERRY_TREE_GROWTH, 0, 0, TRAINER_TYPE_NONE, BERRY_TREE_ROUTE_102_ORAN, BerryTreeScript, 0
	object_event 8, OBJ_EVENT_GFX_BERRY_TREE, 25, 2, 3, MOVEMENT_TYPE_BERRY_TREE_GROWTH, 0, 0, TRAINER_TYPE_NONE, BERRY_TREE_ROUTE_102_PECHA, BerryTreeScript, 0
	object_event 9, OBJ_EVENT_GFX_MANIAC, 16, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 0, TRAINER_TYPE_NORMAL, 3, Route102_EventScript_Allen, 0

Route102_MapBGEvents:
	bg_sign_event 17, 2, 0, BG_EVENT_PLAYER_FACING_ANY, Route102_EventScript_RouteSignPetalburg
	bg_sign_event 40, 9, 0, BG_EVENT_PLAYER_FACING_ANY, Route102_EventScript_RouteSignOldale

Route102_MapEvents::
	map_events Route102_ObjectEvents, NULL, NULL, Route102_MapBGEvents

