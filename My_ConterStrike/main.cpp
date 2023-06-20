
#include "Player.h"
#include "Trader.h"
#include  "MainMenu.h"
#include "Weapon.h"
#include "PotectSuit.h"
#include "Kordon.h"

int main()
{
	Player player;
	Trader trader;
	setlocale(LC_ALL, "Rus");
	mainMenu(player);
	locationKordon(trader,player);
	return 0;
}