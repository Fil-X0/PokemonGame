@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/VerdanturfTown_Mart/map.json
@

VerdanturfTown_Mart_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MART_EMPLOYEE, 1, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, VerdanturfTown_Mart_EventScript_Clerk, 0
	object_event 2, OBJ_EVENT_GFX_BOY_2, 5, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, VerdanturfTown_Mart_EventScript_Boy, 0
	object_event 3, OBJ_EVENT_GFX_EXPERT_F, 8, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, VerdanturfTown_Mart_EventScript_ExpertF, 0
	object_event 4, OBJ_EVENT_GFX_LASS, 3, 2, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, VerdanturfTown_Mart_EventScript_Lass, 0

VerdanturfTown_Mart_MapWarps:
	warp_def 3, 7, 0, 1, MAP_VERDANTURF_TOWN
	warp_def 4, 7, 0, 1, MAP_VERDANTURF_TOWN

VerdanturfTown_Mart_MapEvents::
	map_events VerdanturfTown_Mart_ObjectEvents, VerdanturfTown_Mart_MapWarps, NULL, NULL

