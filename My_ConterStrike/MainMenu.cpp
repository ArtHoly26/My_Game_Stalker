#include "MainMenu.h"

void mainMenu(Player& player)
{
	char ch = _getche();
	do
	{
		std::cout << "������� ���� 'S.T.A.L.K.E.R." << std::endl
			<< "1 - ������� ���������" << std::endl
			<< "2 - ������ ����" << std::endl
			<< "Esc - �����" << std::endl;
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
		std::cout << "�������� �����������: " << std::endl
			<< " 1 - ��������" << std::endl
			<< " 2 - �������" << std::endl
			<< " 3 - �������" << std::endl
			<< " 4 - ������ ����" << std::endl
			<< " 5 - ����" << std::endl
			<< " 6 - �������" << std::endl
			<< " 7 - ��������" << std::endl
			<< " 8 - �������" << std::endl
			<< " Esc - �����" << std::endl;
		std::cout << "���� �����������: " << group.get_group() << std::endl;
		switch (_getche())
		{
		case 49:
			group.set_group("��������");
			system("cls");
			break;
		case 50:
			group.set_group("�������");
			system("cls");
			break;
		case 51:
			group.set_group("�������");
			system("cls");
			break;
		case 52:
			group.set_group("������ ����");
			system("cls");
			break;
		case 53:
			group.set_group("����");
			system("cls");
			break;
		case 54:
			group.set_group("�������");
			system("cls");
			break;
		case 55:
			group.set_group("��������");
			system("cls");
			break;
		case 56:
			group.set_group("�������");
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
		std::cout << "1 - ����� ���������� ������: " << std::endl
			<< "2 - ����� ���������� ��������� �������: " << std::endl
			<< "Esc - �����" << std::endl;
		std::cout << std::endl;
		std::cout << "������������ ������: " << equipment.get_gun() << std::endl
			<< "���������� ������: " << equipment.get_armor() << std::endl;

		switch (_getche())
		{
		case 49:
			system("cls");
			std::cout << "1 - " << pm.get_name() << std::endl;
			std::cout << "2 - " << br.get_name() << std::endl;
			std::cout << "Esc - ����� " << std::endl;
			std::cout << "������������ ������: " << equipment.get_gun() << std::endl;
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
			std::cout << "Esc - ����� " << std::endl;
			std::cout << "���������� ������: " << equipment.get_armor() << std::endl;
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
			std::cout << "������� ������ �� ����������!" << std::endl;
			system("pause");
			system("cls");
			break;
		}
	} while (ch != 27);
}
void namePlayer(Player& name)
{
	std::cout << "������� ���� ��������: " << std::endl;
	std::cin >> name;
}
