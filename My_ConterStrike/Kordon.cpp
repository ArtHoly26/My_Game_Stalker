#include "Kordon.h"

void locationKordon(Trader& trader, Player& player)
{
	char ch = _getche();
	do
	{
		std::cout << "Вы находитесь на Кордоне, выберите дальнейшее действие: " << std::endl
			<< "1 - Отправиться к торговцу, в деревню новичков" << std::endl
			<< "2 - Сдаться военным на КПП (выйти из Зоны)" << std::endl
			<< "3 - Отправиться на АТП" << std::endl
			<< "4 - Отправиться к разрушенному цеху" << std::endl
			<< "5 - Отправиться к ЖД насыпи" << std::endl
			<< "i - Посмотреть инвентарь" << std::endl
			<< "r - Перезарядить оружие" << std::endl
			<< "m - Открыть карту" << std::endl;
		switch (_getche())
		{
		case 49:
			shopTrader(trader, player);
			system("cls");
			break;
		case 50:
			std::cout << "Вы покинули Зону!";
			exit(0);
		case 51:
			break;
		case 52:
			break;
		case 53:
			break;
		case 105:
			player.info();
			system("pause");
			system("cls");
			break;
		case 114:
			break;
		case 109:
			mapKordon();
			system("pause");
			system("cls");
			break;
		default:
			system("cls");
			break;
		}
	} while (ch != 50);
}
void shopTrader(Trader& trader, Player& player)
{
	Beretta_92 br;
	PM pm;
	FM_Browning brow;
	SIG_Sauer sau;
	char ch = _getche();
	system("cls");
	do
	{
		std::cout << "Ну здарова, Сталкер, зачем пришел?" << std::endl
			<< "1 - Торговать " << std::endl
			<< "2 - Расскажи о себе. " << std::endl
			<< "ESC - Выйти " << std::endl;
		switch (_getche())
		{
		case 49:
			system("cls");
			std::cout << "Ассортимент: " << std::endl;
			std::cout << "1 - "; br.info();
			std::cout << "2 - "; pm.info();
			std::cout << "3 - "; brow.info();
			std::cout << "4 - "; sau.info();
			std::cout << "Деньги" << player.get_money();
			switch (_getche())
			{
			case 49:
				if (player.get_money() > br.get_price())
				{
					player.set_money(player.get_money() - br.get_price());
					std::cout << "Покупка выполнена успешна!" << std::endl;
					system("pause");
					player.set_gun(br.get_name());
				}
				if (player.get_money() < br.get_price())
				{
					std::cout << "У вас недостаточно денег!" << std::endl;
					system("pause");
				}
				system("cls");
				break;
			case 50:
				if (player.get_money() > pm.get_price())
				{
					player.set_money(player.get_money() - pm.get_price());
					std::cout << "Покупка выполнена успешна!" << std::endl;
					system("pause");
					player.set_gun(pm.get_name());
				}
				if (player.get_money() < pm.get_price())
				{
					std::cout << "У вас недостаточно денег!" << std::endl;
					system("pause");
				}
				system("cls");
				break;
			case 51:
				if (player.get_money() > brow.get_price())
				{
					player.set_money(player.get_money() - brow.get_price());
					std::cout << "Покупка выполнена успешна!" << std::endl;
					system("pause");
					player.set_gun(brow.get_name());
				}
				if (player.get_money() < brow.get_price())
				{
					std::cout << "У вас недостаточно денег!" << std::endl;
					system("pause");
				}
				system("cls");
				break;
			case 52:
				if (player.get_money() > sau.get_price())
				{
					player.set_money(player.get_money() - sau.get_price());
					std::cout << "Покупка выполнена успешна!" << std::endl;
					system("pause");
					player.set_gun(sau.get_name());
				}
				if (player.get_money() < sau.get_price())
				{
					std::cout << "У вас недостаточно денег!" << std::endl;
					system("pause");
				}
				system("cls");
				break;
			default:
				std::cout << "Данного пункта не существует!" << std::endl;
				system("pause");
				system("cls");
				break;
			}
			break;
		case 50:
			trader.traderHistory();
			system("pause");
			system("cls");
			break;
		case 27:
			ch = 27;
		default:
			system("cls");
			break;
		}
	} while (ch != 27);
}
void mapKordon()
{
	char filename[15] = { "mapKordon.jpg" };
	std::ofstream fout(filename);
	char command[FILENAME_MAX] = "paint ";
	strcat(command, filename);
	system(command);
}