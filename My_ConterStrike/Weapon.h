#pragma once
#include "Lib.h"

class Weapon
{
public:
	virtual std::string get_name()const = 0;
	virtual int  get_holder()const = 0;
	virtual int  get_price()const = 0;
	virtual void shoot() = 0;
	virtual void reloading() = 0;
	virtual void info()const;
	virtual void action();
};

class Pistol : public Weapon
{
public:
	virtual void slot() const = 0;
};
class PM : public Pistol
{
	std::string name;
	int holder;
	int price;
public:
	PM(std::string name = "ол", int holder = 8, int price = 200);
	~PM();
	std::string get_name()const;
	int  get_holder()const;
	int  get_price()const;
	void set_holder(int holder);
	void slot()const;
	void shoot();
	void reloading();
	void info()const;
	void action();
};
class Beretta_92 : public Pistol
{
	std::string name;
	int holder;
	int price;
public:
	Beretta_92(std::string name = "Beratta 92", int holder = 15, int price = 600);
	~Beretta_92();
	std::string get_name()const;
	int  get_holder()const;
	int  get_price()const;
	void set_holder(int holder);
	void slot()const;
	void shoot();
	void reloading();
	void info()const;
	void action();
};
class FM_Browning : public Pistol
{
	std::string name;
	int holder;
	int price;
public:
	FM_Browning(std::string name = "Browning M.1903", int holder = 7, int price = 1000);
	~FM_Browning();
	std::string get_name()const;
	int  get_holder()const;
	int  get_price()const;
	void set_holder(int holder);
	void slot()const;
	void shoot();
	void reloading();
	void info()const;
	void action();
};
class SIG_Sauer : public Pistol
{
	std::string name;
	int holder;
	int price;
public:
	SIG_Sauer(std::string name = "SIG-Sauer P320", int holder = 17, int price = 1200);
	~SIG_Sauer();
	std::string get_name()const;
	int  get_holder()const;
	int  get_price()const;
	void set_holder(int holder);
	void slot()const;
	void shoot();
	void reloading();
	void info()const;
	void action();
};
