#pragma once
#include "Lib.h"
#include "Player.h"

class Trader
{
	int relationships;
public:
	Trader(int relationships = 0);
	int get_relationships()const;
	void traderHistory()const;

	friend void shopTrader(Trader& trader, Player& player);
};


