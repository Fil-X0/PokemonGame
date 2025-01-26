@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FallarborTown/map.json
@

FallarborTown_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_GIRL_1, 5, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 1, TRAINER_TYPE_NONE, 0, FallarborTown_EventScript_Girl, 0
	object_event 2, OBJ_EVENT_GFX_EXPERT_M, 11, 9, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, TRAINER_TYPE_NONE, 0, FallarborTown_EventScript_ExpertM, 0
	object_event 3, OBJ_EVENT_GFX_GENTLEMAN, 11, 15, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FallarborTown_EventScript_Gentleman, 0
	object_event 4, OBJ_EVENT_GFX_AZURILL, 5, 12, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 0, TRAINER_TYPE_NONE, 0, FallarborTown_EventScript_Azurill, FLAG_HIDE_FALLARBOR_AZURILL

FallarborTown_MapWarps:
	warp_def 15, 15, 0, 0, MAP_FALLARBOR_TOWN_MART
	warp_def 8, 7, 0, 0, MAP_FALLARBOR_TOWN_BATTLE_TENT_LOBBY
	warp_def 14, 7, 0, 0, MAP_FALLARBOR_TOWN_POKEMON_CENTER_1F
	warp_def 7, 16, 0, 0, MAP_FALLARBOR_TOWN_COZMOS_HOUSE
	warp_def 1, 6, 0, 0, MAP_FALLARBOR_TOWN_MOVE_RELEARNERS_HOUSE

FallarborTown_MapBGEvents:
	bg_sign_event 16, 15, 0, BG_EVENT_PLAYER_FACING_NORTH, Common_EventScript_ShowPokemartSign
	bg_sign_event 15, 7, 0, BG_EVENT_PLAYER_FACING_NORTH, Common_EventScript_ShowPokemonCenterSign
	bg_sign_event 6, 8, 0, BG_EVENT_PLAYER_FACING_ANY, FallarborTown_EventScript_BattleTentSign
	bg_sign_event 16, 7, 0, BG_EVENT_PLAYER_FACING_NORTH, Common_EventScript_ShowPokemonCenterSign
	bg_sign_event 10, 11, 0, BG_EVENT_PLAYER_FACING_ANY, FallarborTown_EventScript_TownSign
	bg_sign_event 17, 15, 0, BG_EVENT_PLAYER_FACING_NORTH, Common_EventScript_ShowPokemartSign
	bg_sign_event 3, 7, 0, BG_EVENT_PLAYER_FACING_ANY, FallarborTown_EventScript_MoveTutorSign
	bg_hidden_item_event 2, 15, 3, ITEM_NUGGET, FLAG_HIDDEN_ITEM_FALLARBOR_TOWN_NUGGET

FallarborTown_MapEvents::
	map_events FallarborTown_ObjectEvents, FallarborTown_MapWarps, NULL, FallarborTown_MapBGEvents

