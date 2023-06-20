#include "MainMenu.h"

void mainMenu(Player& player)
{
	char ch = _getche();
	do
	{
		std::cout << "Главное меню 'S.T.A.L.K.E.R." << std::endl
			<< "1 - Создать персонажа" << std::endl
			<< "2 - Начать игру" << std::endl
			<< "Esc - Выход" << std::endl;
		switch (_getche())
		{
		case 49:
			system("cls");
			namePlayer(player);
			system("cls");
			groupPlayer(player);
			system("cls");
			equipmentPlayer(player);
			system("cls");
			player.info();
			system("pause");
			system("cls");
			break;
		case 27:
			exit(0);
		case 50:
			ch = 27;
		default:
			system("cls");
			break;
		}
	} while (ch != 27);
}
void groupPlayer(Player& group)
{
	char ch = _getche();
	do
	{
		std::cout << "Выберите группировку: " << std::endl
			<< " 1 - Одиночки" << std::endl
			<< " 2 - Военные" << std::endl
			<< " 3 - Бандиты" << std::endl
			<< " 4 - Чистое небо" << std::endl
			<< " 5 - Долг" << std::endl
			<< " 6 - Свобода" << std::endl
			<< " 7 - Наемники" << std::endl
			<< " 8 - Монолит" << std::endl
			<< " Esc - Далее" << std::endl;
		std::cout << "Ваша группировка: " << group.get_group() << std::endl;
		switch (_getche())
		{
		case 49:
			group.set_group("Одиночки");
			system("cls");
			break;
		case 50:
			group.set_group("Военные");
			system("cls");
			break;
		case 51:
			group.set_group("Бандиты");
			system("cls");
			break;
		case 52:
			group.set_group("Чистое ннбо");
			system("cls");
			break;
		case 53:
			group.set_group("Долг");
			system("cls");
			break;
		case 54:
			group.set_group("Свобода");
			system("cls");
			break;
		case 55:
			group.set_group("Наемники");
			system("cls");
			break;
		case 56:
			group.set_group("Монолит");
			system("cls");
			break;
		case 27:
			ch = 27;
			break;
		default:
			system("cls");
			break;
		}
	} while (ch != 27);
}
void equipmentPlayer(Player& equipment)
{
	PM pm;
	Beretta_92 br;
	ProtectiveSuit1 Ps1;
	ProtectiveSuit2 Ps2;

	char ch = _getche();
	do
	{
		std::cout << "1 - Выбор начального оружия: " << std::endl
			<< "2 - Выбор начального защитного костюма: " << std::endl
			<< "Esc - Далее" << std::endl;
		std::cout << std::endl;
		std::cout << "Экипированно оружие: " << equipment.get_gun() << std::endl
			<< "Экипирован костюм: " << equipment.get_armor() << std::endl;

		switch (_getche())
		{
		case 49:
			system("cls");
			std::cout << "1 - " << pm.get_name() << std::endl;
			std::cout << "2 - " << br.get_name() << std::endl;
			std::cout << "Esc - Далее " << std::endl;
			std::cout << "Экипированно оружие: " << equipment.get_gun() << std::endl;
			switch (_getche())
			{
			case 49:
				equipment.set_gun(pm.get_name());
				system("cls");
				break;
			case 50:
				equipment.set_gun(br.get_name());
				system("cls");
				break;
			case 27:
				ch = 27;
			default:
				system("cls");
				break;
			}
			break;

		case 50:
			system("cls");
			std::cout << "1 - " << Ps1.get_name() << std::endl;
			std::cout << "2 - " << Ps2.get_name() << std::endl;
			std::cout << "Esc - Далее " << std::endl;
			std::cout << "Экипирован костюм: " << equipment.get_armor() << std::endl;
			switch (_getche())
			{
			case 49:
				equipment.set_armor(Ps1.get_name());
				equipment.set_protect(Ps1.get_protection());
				system("cls");
				break;
			case 50:
				equipment.set_armor(Ps2.get_name());
				equipment.set_protect(Ps2.get_protection());
				system("cls");
				break;
			default:
				system("cls");
				break;
			}
			break;

		case 27:
			ch = 27;
			break;
		default:
			std::cout << "Данного пункта не существует!" << std::endl;
			system("pause");
			system("cls");
			break;
		}
	} while (ch != 27);
}
void namePlayer(Player& name)
{
	std::cout << "Введите свое прозвище: " << std::endl;
	std::cin >> name;
}
