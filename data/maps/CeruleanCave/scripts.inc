# 1 "data/maps/CeruleanCave/scripts.pory"

# 2 "data/maps/CeruleanCave/scripts.pory"
CeruleanCave_MapScripts::
# 3 "data/maps/CeruleanCave/scripts.pory"
	.byte 0
# 4 "data/maps/CeruleanCave/scripts.pory"

# 5 "data/maps/CeruleanCave/scripts.pory"
CeruleanCave_EventScript_WarptoRusturfTunnel::
# 6 "data/maps/CeruleanCave/scripts.pory"
	lock
# 7 "data/maps/CeruleanCave/scripts.pory"
	waitse
# 8 "data/maps/CeruleanCave/scripts.pory"
	playmoncry SPECIES_HOOPA, 2
# 9 "data/maps/CeruleanCave/scripts.pory"
	delay 40
# 10 "data/maps/CeruleanCave/scripts.pory"
	waitmoncry
# 11 "data/maps/CeruleanCave/scripts.pory"
	warp MAP_RUSTURF_TUNNEL_F2, 6, 17, 6
# 12 "data/maps/CeruleanCave/scripts.pory"
	release
# 13 "data/maps/CeruleanCave/scripts.pory"
	end
