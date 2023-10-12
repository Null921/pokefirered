PewterCity_House3_MapScripts::
	.byte 0

PewterCity_House3_EventScript_BerryChef::
	msgbox PewterCity_House3_Text_BerryChef, MSGBOX_NPC
	goto_if_questlog EventScript_ReleaseEnd
	lock
	faceplayer
	message Text_MayIHelpYou
	waitmessage
	pokemart PewterCity_Berry_Mart_Items
	msgbox Text_PleaseComeAgain
	release
	end

	.align 2
PewterCity_Berry_Mart_Items::
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_RAZZ_BERRY
	.2byte ITEM_PINAP_BERRY
	.2byte ITEM_NANAB_BERRY
	.2byte ITEM_BLUK_BERRY
	.2byte ITEM_NONE
	.2byte ITEM_NONE
	.2byte ITEM_NONE
	.2byte ITEM_NONE
	release
	end