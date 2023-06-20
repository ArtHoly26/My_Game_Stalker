#include "Kordon.h"

void locationKordon(Trader& trader, Player& player)
{
	char ch = _getche();
	do
	{
		std::cout << "�� ���������� �� �������, �������� ���������� ��������: " << std::endl
			<< "1 - ����������� � ��������, � ������� ��������" << std::endl
			<< "2 - ������� ������� �� ��� (����� �� ����)" << std::endl
			<< "3 - ����������� �� ���" << std::endl
			<< "4 - ����������� � ������������ ����" << std::endl
			<< "5 - ����������� � �� ������" << std::endl
			<< "i - ���������� ���������" << std::endl
			<< "r - ������������ ������" << std::endl
			<< "m - ������� �����" << std::endl;
		switch (_getche())
		{
		case 49:
			shopTrader(trader, player);
			system("cls");
			break;
		case 50:
			std::cout << "�� �������� ����!";
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
		std::cout << "�� �������, �������, ����� ������?" << std::endl
			<< "1 - ��������� " << std::endl
			<< "2 - �������� � ����. " << std::endl
			<< "ESC - ����� " << std::endl;
		switch (_getche())
		{
		case 49:
			system("cls");
			std::cout << "�����������: " << std::endl;
			std::cout << "1 - "; br.info();
			std::cout << "2 - "; pm.info();
			std::cout << "3 - "; brow.info();
			std::cout << "4 - "; sau.info();
			std::cout << "������" << player.get_money();
			switch (_getche())
			{
			case 49:
				if (player.get_money() > br.get_price())
				{
					player.set_money(player.get_money() - br.get_price());
					std::cout << "������� ��������� �������!" << std::endl;
					system("pause");
					player.set_gun(br.get_name());
				}
				if (player.get_money() < br.get_price())
				{
					std::cout << "� ��� ������������ �����!" << std::endl;
					system("pause");
				}
				system("cls");
				break;
			case 50:
				if (player.get_money() > pm.get_price())
				{
					player.set_money(player.get_money() - pm.get_price());
					std::cout << "������� ��������� �������!" << std::endl;
					system("pause");
					player.set_gun(pm.get_name());
				}
				if (player.get_money() < pm.get_price())
				{
					std::cout << "� ��� ������������ �����!" << std::endl;
					system("pause");
				}
				system("cls");
				break;
			case 51:
				if (player.get_money() > brow.get_price())
				{
					player.set_money(player.get_money() - brow.get_price());
					std::cout << "������� ��������� �������!" << std::endl;
					system("pause");
					player.set_gun(brow.get_name());
				}
				if (player.get_money() < brow.get_price())
				{
					std::cout << "� ��� ������������ �����!" << std::endl;
					system("pause");
				}
				system("cls");
				break;
			case 52:
				if (player.get_money() > sau.get_price())
				{
					player.set_money(player.get_money() - sau.get_price());
					std::cout << "������� ��������� �������!" << std::endl;
					system("pause");
					player.set_gun(sau.get_name());
				}
				if (player.get_money() < sau.get_price())
				{
					std::cout << "� ��� ������������ �����!" << std::endl;
					system("pause");
				}
				system("cls");
				break;
			default:
				std::cout << "������� ������ �� ����������!" << std::endl;
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