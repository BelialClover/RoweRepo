CeruleanCave_MapScripts::
	.byte 0

CeruleanCave_EventScript_WarptoRusturfTunnel::
	lock
	waitse
	playmoncry SPECIES_HOOPA, 2
	delay 40
	waitmoncry
	warp MAP_RUSTURF_TUNNEL_F2, 6, 17, 6
	release
	end
