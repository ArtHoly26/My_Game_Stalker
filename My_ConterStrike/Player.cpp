#include "Player.h"



Player::Player(int health, int money, int protect)
{
	this->health = health;
	this->money = money;
	this->protect = protect;
}
int Player::get_health()const
{
	return health;
}
int Player::get_money()const
{
	return money;
}
void Player::set_money(int money)
{
	this->money = money;
}
std::string Player::get_group()const
{
	return group;
}
void Player::set_group(std::string group)
{
	this->group = group;
}
std::string Player::get_gun()const
{
	return gun;
}
void Player::set_gun(std::string gun)
{
	this->gun = gun;
}
std::string Player::get_armor()const
{
	return armor;
}
void Player::set_armor(std::string armor)
{
	this->armor = armor;
}
std::string Player::get_name()const
{
	return name;
}
void Player::set_name(std::string name)
{
	this->name = name;
}
int Player::get_protect()const
{
	return protect;
}
void Player::set_protect(int protect)
{
	this->protect = protect;
}
void Player::info()const
{
	std::cout << "Прозвище: " << get_name() << std::endl
		      << "Группировка: " << get_group() << std::endl
		      << "Здоровье: " << get_health() << std::endl
		      << "Защита: " << get_protect() << std::endl
		      << "Оружие: " << get_gun() << std::endl
		      << "Защитный костюм: " << get_armor() << std::endl
		      << "Деньги: " << get_money() << std::endl;
}




std::istream& operator >> (std::istream& ifs, Player& player)
{
	std::string nick;
	ifs >> nick;
	player.set_name(nick);
	return ifs;
}