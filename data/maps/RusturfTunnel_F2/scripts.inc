RusturfTunnel_F2_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, RusturfTunnel_F2_OnLoad
	.byte 0
	
RusturfTunnel_F2_OnLoad: @ 8236F16
	setflag FLAG_DISABLE_PORTALS
	goto_if_set   FLAG_CAUGHT_MEW, RusturfTunnel_F2_EventScript_EnablePortal
	end
	
RusturfTunnel_F2_EventScript_EnablePortal::
	clearflag FLAG_DISABLE_PORTALS
	end
	
RusturfTunnel_F2_EventScript_WarptoCeruleanCave::
	lock
	waitse
	playmoncry SPECIES_HOOPA, 2
	delay 40
	waitmoncry
	warp MAP_CERULEAN_CAVE, 20, 33, 20
	release
	end
