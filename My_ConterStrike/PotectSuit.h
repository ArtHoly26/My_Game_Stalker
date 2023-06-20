#pragma once
#include "Lib.h"

class ProtectiveSuit
{
public:
	virtual int get_protection()const = 0;
	virtual std::string get_name()const = 0;
	virtual int  get_price()const = 0;
	virtual void info()const;
};
class ProtectiveSuit1 : ProtectiveSuit
{
	int protection;
	int price;
	std::string name;
public:
	ProtectiveSuit1(int protection = 5, int price = 200, std::string name = "Комбинезон новичка");
	int get_protection()const;
	std::string get_name()const;
	int get_price()const;
	void info()const;
};
class ProtectiveSuit2 : ProtectiveSuit
{
	int protection;
	int price;
	std::string name;
public:
	ProtectiveSuit2(int protection = 6, int price = 250, std::string name = "Плащ утепленный");
	int get_protection()const;
	std::string get_name()const;
	int get_price()const;
	void info()const;
};