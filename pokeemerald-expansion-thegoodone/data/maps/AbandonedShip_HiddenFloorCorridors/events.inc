@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/AbandonedShip_HiddenFloorCorridors/map.json
@

AbandonedShip_HiddenFloorCorridors_MapWarps:
	warp_def 3, 8, 3, 0, MAP_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS
	warp_def 6, 8, 3, 2, MAP_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS
	warp_def 9, 8, 3, 4, MAP_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS
	warp_def 3, 3, 3, 6, MAP_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS
	warp_def 6, 3, 3, 7, MAP_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS
	warp_def 9, 3, 3, 8, MAP_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS

AbandonedShip_HiddenFloorCorridors_MapBGEvents:
	bg_sign_event 3, 8, 3, BG_EVENT_PLAYER_FACING_ANY, AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door
	bg_sign_event 6, 8, 3, BG_EVENT_PLAYER_FACING_ANY, AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door
	bg_sign_event 3, 4, 0, BG_EVENT_PLAYER_FACING_ANY, AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door
	bg_sign_event 9, 4, 0, BG_EVENT_PLAYER_FACING_ANY, AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door

AbandonedShip_HiddenFloorCorridors_MapEvents::
	map_events NULL, AbandonedShip_HiddenFloorCorridors_MapWarps, NULL, AbandonedShip_HiddenFloorCorridors_MapBGEvents

