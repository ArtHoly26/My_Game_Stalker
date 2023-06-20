#include "Weapon.h"

 void Weapon:: info()const
{
	std::cout << "Название: " << get_name() << std::endl;
	std::cout << "Колличество патронов в обойме: " << get_holder() << std::endl;
	std::cout << "Цена: " << get_price() << std::endl;
}
 void Weapon::action()
{
	reloading();
	shoot();
}


 PM::PM(std::string name, int holder , int price )
 {
	 this->name = name;
	 this->holder = holder;
	 this->price = price;
 }
 PM::~PM()
 {

 }
 std::string PM::get_name()const
 {
	 return name;
 }
 int PM::get_holder()const
 {
	 return holder;
 }
 int PM::get_price()const
 {
	 return price;
 }
 void PM::set_holder(int holder)
 {
	 this->holder = holder;
 }
 void PM::slot()const
 {

 }
 void PM::shoot()
 {
	 if (get_holder() > 0)
	 {
		 std::cout << "BANG!" << std::endl;
		 set_holder(get_holder() - 1);
	 }
	 else  std::cout << "Обойма пуста необходимо перезарядиться! " << std::endl;

 }
 void PM::reloading()
 {
	 std::cout << "Перезарядка..." << std::endl;
	 this->holder = 8;
 }
 void PM::info()const
 {
	 Pistol::info();
 }
 void PM::action()
 {
	 //shoot();
 }


 Beretta_92::Beretta_92(std::string name, int holder, int price)
 {
	 this->name = name;
	 this->holder = holder;
	 this->price = price;
 }
 Beretta_92::~Beretta_92()
 {

 }
 std::string  Beretta_92::get_name()const
 {
	 return name;
 }
 int Beretta_92::get_holder()const
 {
	 return holder;
 }
 int Beretta_92::get_price()const
 {
	 return price;
 }
 void Beretta_92::set_holder(int holder)
 {
	 this->holder = holder;
 }
 void Beretta_92::slot()const
 {

 }
 void Beretta_92::shoot()
 {
	 if (get_holder() > 0)
	 {
		 std::cout << "BANG!" << std::endl;
		 set_holder(get_holder() - 1);
	 }
	 else  std::cout << "Обойма пуста необходимо перезарядиться! " << std::endl;

 }
 void Beretta_92::reloading()
 {
	 std::cout << "Перезарядка..." << std::endl;
	 this->holder = 15;
 }
 void Beretta_92::info()const
 {
	 Pistol::info();
 }
 void Beretta_92::action()
 {
	 //shoot();
 }


 FM_Browning::FM_Browning(std::string name, int holder, int price)
 {
	 this->name = name;
	 this->holder = holder;
	 this->price = price;
 }
 FM_Browning::~FM_Browning()
 {

 }
 std::string FM_Browning::get_name()const
 {
	 return name;
 }
 int FM_Browning::get_holder()const
 {
	 return holder;
 }
 int FM_Browning::get_price()const
 {
	 return price;
 }
 void  FM_Browning:: set_holder(int holder)
 {
	 this->holder = holder;
 }
 void FM_Browning::slot()const
 {

 }
 void FM_Browning::shoot()
 {
	 if (get_holder() > 0)
	 {
		 std::cout << "BANG!" << std::endl;
		 set_holder(get_holder() - 1);
	 }
	 else  std::cout << "Обойма пуста необходимо перезарядиться! " << std::endl;

 }
 void FM_Browning::reloading()
 {
	 std::cout << "Перезарядка..." << std::endl;
	 this->holder = 7;
 }
 void FM_Browning::info()const
 {

	 Pistol::info();
 }
 void FM_Browning::action()
 {
	 //shoot();
 }


 SIG_Sauer::SIG_Sauer(std::string name, int holder, int price)
 {
	 this->name = name;
	 this->holder = holder;
	 this->price = price;
 }
 SIG_Sauer::~SIG_Sauer()
 {

 }
 std::string  SIG_Sauer::get_name()const
 {
	 return name;
 }
 int  SIG_Sauer::get_holder()const
 {
	 return holder;
 }
 int  SIG_Sauer::get_price()const
 {
	 return price;
 }
 void  SIG_Sauer::set_holder(int holder)
 {
	 this->holder = holder;
 }
 void  SIG_Sauer::slot()const
 {

 }
 void  SIG_Sauer::shoot()
 {
	 if (get_holder() > 0)
	 {
		 std::cout << "BANG!" << std::endl;
		 set_holder(get_holder() - 1);
	 }
	 else std::cout << "Обойма пуста необходимо перезарядиться! " << std::endl;

 }
 void  SIG_Sauer::reloading()
 {
	 std::cout << "Перезарядка..." << std::endl;
	 this->holder = 17;
 }
 void  SIG_Sauer::info()const
 {
	 Pistol::info();
 }
 void  SIG_Sauer::action()
 {
	 //shoot();
 }