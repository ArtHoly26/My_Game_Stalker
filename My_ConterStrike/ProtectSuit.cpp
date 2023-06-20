#include "PotectSuit.h"

void ProtectiveSuit:: info()const
{
	std::cout << "Название " << get_name() << std::endl;
	std::cout << "Цена " << get_name() << std::endl;
	std::cout << "Защита " << get_protection() << std::endl;
}


ProtectiveSuit1::ProtectiveSuit1(int protection, int price, std::string name)
{
	this->protection = protection;
	this->price = price;
	this->name = name;
}
int ProtectiveSuit1::get_protection()const
{
	return protection;
}
std::string ProtectiveSuit1::get_name()const
{
	return name;
}
int ProtectiveSuit1::get_price()const
{
	return price;
}
void ProtectiveSuit1::info()const
{

}


ProtectiveSuit2::ProtectiveSuit2(int protection, int price, std::string name)
{
	this->protection = protection;
	this->price = price;
	this->name = name;
}
int ProtectiveSuit2::get_protection()const
{
	return protection;
}
std::string ProtectiveSuit2::get_name()const
{
	return name;
}
int ProtectiveSuit2::get_price()const
{
	return price;
}
void ProtectiveSuit2::info()const
{

}