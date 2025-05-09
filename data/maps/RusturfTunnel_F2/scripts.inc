# 1 "data/maps/RusturfTunnel_F2/scripts.pory"

# 2 "data/maps/RusturfTunnel_F2/scripts.pory"
RusturfTunnel_F2_MapScripts::
# 3 "data/maps/RusturfTunnel_F2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RusturfTunnel_F2_OnLoad
# 4 "data/maps/RusturfTunnel_F2/scripts.pory"
	.byte 0
# 5 "data/maps/RusturfTunnel_F2/scripts.pory"
	
# 6 "data/maps/RusturfTunnel_F2/scripts.pory"
RusturfTunnel_F2_OnLoad: @ 8236F16
# 7 "data/maps/RusturfTunnel_F2/scripts.pory"
	setflag FLAG_DISABLE_PORTALS
# 8 "data/maps/RusturfTunnel_F2/scripts.pory"
	goto_if_set   FLAG_CAUGHT_MEW, RusturfTunnel_F2_EventScript_EnablePortal
# 9 "data/maps/RusturfTunnel_F2/scripts.pory"
	end
# 10 "data/maps/RusturfTunnel_F2/scripts.pory"
	
# 11 "data/maps/RusturfTunnel_F2/scripts.pory"
RusturfTunnel_F2_EventScript_EnablePortal::
# 12 "data/maps/RusturfTunnel_F2/scripts.pory"
	clearflag FLAG_DISABLE_PORTALS
# 13 "data/maps/RusturfTunnel_F2/scripts.pory"
	end
# 14 "data/maps/RusturfTunnel_F2/scripts.pory"
	
# 15 "data/maps/RusturfTunnel_F2/scripts.pory"
RusturfTunnel_F2_EventScript_WarptoCeruleanCave::
# 16 "data/maps/RusturfTunnel_F2/scripts.pory"
	lock
# 17 "data/maps/RusturfTunnel_F2/scripts.pory"
	waitse
# 18 "data/maps/RusturfTunnel_F2/scripts.pory"
	playmoncry SPECIES_HOOPA, 2
# 19 "data/maps/RusturfTunnel_F2/scripts.pory"
	delay 40
# 20 "data/maps/RusturfTunnel_F2/scripts.pory"
	waitmoncry
# 21 "data/maps/RusturfTunnel_F2/scripts.pory"
	warp MAP_CERULEAN_CAVE, 20, 33, 20
# 22 "data/maps/RusturfTunnel_F2/scripts.pory"
	release
# 23 "data/maps/RusturfTunnel_F2/scripts.pory"
	end
