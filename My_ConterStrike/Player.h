#pragma once
#include "Lib.h"

class Player
{
	int health;
	int money;
	int protect;
	std::string name;
	std::string group;
	std::string gun;
	std::string armor;
public:
	Player(int health = 10, int money = 1000, int protect = 0);
	int get_health()const;
	int get_money()const;
	void set_money(int money);
	std::string get_group()const;
	void set_group(std::string group);
	std::string get_gun()const;
	void set_gun(std::string gun);
	std::string get_armor()const;
	void set_armor(std::string armor);
	std::string get_name()const;
	void set_name(std::string name);
	int get_protect()const;
	void set_protect(int protect);
	void info()const;

	friend void groupPlayer(Player& group);
	friend void equipmentPlayer(Player& equipment);
	friend void namePlayer(Player& name);
};


std::istream& operator >> (std::istream& ifs, Player& player);
