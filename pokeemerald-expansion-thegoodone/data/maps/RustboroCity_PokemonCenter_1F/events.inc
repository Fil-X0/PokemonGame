@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/RustboroCity_PokemonCenter_1F/map.json
@

RustboroCity_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, RustboroCity_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_MAN_1, 11, 2, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, RustboroCity_PokemonCenter_1F_EventScript_Man, 0
	object_event 3, OBJ_EVENT_GFX_BOY_1, 3, 4, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, RustboroCity_PokemonCenter_1F_EventScript_Boy, 0
	object_event 4, OBJ_EVENT_GFX_GIRL_3, 10, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, RustboroCity_PokemonCenter_1F_EventScript_Girl, 0

RustboroCity_PokemonCenter_1F_MapWarps:
	warp_def 7, 8, 3, 3, MAP_RUSTBORO_CITY
	warp_def 6, 8, 3, 3, MAP_RUSTBORO_CITY
	warp_def 1, 6, 4, 0, MAP_RUSTBORO_CITY_POKEMON_CENTER_2F

RustboroCity_PokemonCenter_1F_MapEvents::
	map_events RustboroCity_PokemonCenter_1F_ObjectEvents, RustboroCity_PokemonCenter_1F_MapWarps, NULL, NULL

