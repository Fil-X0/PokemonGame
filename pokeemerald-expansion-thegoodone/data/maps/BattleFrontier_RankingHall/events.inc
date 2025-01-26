@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/BattleFrontier_RankingHall/map.json
@

BattleFrontier_RankingHall_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_TEALA, 24, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, BattleFrontier_RankingHall_EventScript_Attendant, 0
	object_event 2, OBJ_EVENT_GFX_NINJA_BOY, 4, 10, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, BattleFrontier_RankingHall_EventScript_NinjaBoy, 0
	object_event 3, OBJ_EVENT_GFX_BOY_3, 44, 11, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, BattleFrontier_RankingHall_EventScript_Boy, 0

BattleFrontier_RankingHall_MapWarps:
	warp_def 26, 14, 3, 4, MAP_BATTLE_FRONTIER_OUTSIDE_EAST
	warp_def 27, 14, 3, 4, MAP_BATTLE_FRONTIER_OUTSIDE_EAST

BattleFrontier_RankingHall_MapBGEvents:
	bg_sign_event 26, 9, 0, BG_EVENT_PLAYER_FACING_NORTH, BattleFrontier_RankingHall_EventScript_TowerSinglesRecords
	bg_sign_event 23, 8, 0, BG_EVENT_PLAYER_FACING_NORTH, BattleFrontier_RankingHall_EventScript_TowerDoublesRecords
	bg_sign_event 26, 5, 0, BG_EVENT_PLAYER_FACING_NORTH, BattleFrontier_RankingHall_EventScript_TowerMultisRecords
	bg_sign_event 29, 8, 0, BG_EVENT_PLAYER_FACING_NORTH, BattleFrontier_RankingHall_EventScript_TowerLinkRecords
	bg_sign_event 42, 9, 0, BG_EVENT_PLAYER_FACING_NORTH, BattleFrontier_RankingHall_EventScript_ArenaRecords
	bg_sign_event 46, 9, 0, BG_EVENT_PLAYER_FACING_NORTH, BattleFrontier_RankingHall_EventScript_PalaceRecords
	bg_sign_event 10, 9, 0, BG_EVENT_PLAYER_FACING_NORTH, BattleFrontier_RankingHall_EventScript_FactoryRecords
	bg_sign_event 8, 7, 0, BG_EVENT_PLAYER_FACING_NORTH, BattleFrontier_RankingHall_EventScript_DomeRecords
	bg_sign_event 6, 9, 0, BG_EVENT_PLAYER_FACING_NORTH, BattleFrontier_RankingHall_EventScript_PikeRecords
	bg_sign_event 44, 7, 0, BG_EVENT_PLAYER_FACING_NORTH, BattleFrontier_RankingHall_EventScript_PyramidRecords
	bg_sign_event 16, 8, 0, BG_EVENT_PLAYER_FACING_ANY, BattleFrontier_RankingHall_EventScript_DomePikeFactoryRecordsSign
	bg_sign_event 36, 8, 0, BG_EVENT_PLAYER_FACING_ANY, BattleFrontier_RankingHall_EventScript_PalaceArenaPyramidRecordsSIgn

BattleFrontier_RankingHall_MapEvents::
	map_events BattleFrontier_RankingHall_ObjectEvents, BattleFrontier_RankingHall_MapWarps, NULL, BattleFrontier_RankingHall_MapBGEvents

