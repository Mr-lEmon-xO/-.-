/*
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int q;
	cin >> q;
	if (q == 0) {
		cout << "����";
	}
	else
	{
		if (q <= 10000000) {
			switch (q / 1000000)
			{
			case (1):cout << "���� ������";
				break;
			case (2):cout << "��� �������";
				break;
			case (3):cout << "��� �������";
				break;
			case (4):cout << "������ �������";
				break;
			case (5):cout << "���� ��������";
				break;
			case (6):cout << "����� ��������";
				break;
			case (7): cout << "���� ��������";
				break;
			case (8): cout << "������ ��������";
				break;
			case (9): cout << "������ ��������";
				break;
			case (10): cout << "������ ��������";
				break;
			default: "";
				break;
			}
			switch (q % 1000000 / 100000)
			{
			case (1):cout << " ���";
				break;
			case (2):cout << " ������";
				break;
			case (3):cout << " ������";
				break;
			case (4):cout << " ���������";
				break;
			case (5):cout << " �������";
				break;
			case (6):cout << " ��������";
				break;
			case (7): cout << " �������";
				break;
			case (8): cout << " ���������";
				break;
			case (9): cout << " ���������";
				break;
			default: "";
				break;
			}
			if (q % 100000 / 1000 <= 20)
			{
				switch (q % 100000 / 1000) {
				case (10): cout << " ������";
					break;
				case (11): cout << " ����������";
					break;
				case (12): cout << " ����������";
					break;
				case (13): cout << " ����������";
					break;
				case (14): cout << " ������������";
					break;
				case (15): cout << " �����������";
					break;
				case (16): cout << " ������������";
					break;
				case (17): cout << " ����������";
					break;
				case (18): cout << " ������������";
					break;
				case (19): cout << " ������������";
					break;
				case (20): cout << "��������";
				}
			}
			else
			{
				switch (q % 100000 / 10000) {
				case (3):cout << " ��������";
					break;
				case (4):cout << " �����";
					break;
				case (5):cout << " ���������";
					break;
				case (6):cout << " ����������";
					break;
				case (7): cout << " ���������";
					break;
				case (8): cout << " �����������";
					break;
				case (9): cout << " ���������";
					break;
				default: "";
					break;
				}

			}
			if (q % 100000 / 1000 > 10 && q % 100000 / 1000 < 20) {
				cout << "";
			}
			else
			{
				switch (q % 10000 / 1000)
				{
				case (1):cout << " ����";
					break;
				case (2):cout << " ���";
					break;
				case (3):cout << " ���";
					break;
				case (4):cout << " ������";
					break;
				case (5):cout << " ����";
					break;
				case (6):cout << " �����";
					break;
				case (7): cout << " ����";
					break;
				case (8): cout << " ������";
					break;
				case (9): cout << " ������";
					break;
				default: "";
					break;
				}
			}
			if (q == 10000 || q == 100000) {
				cout << " �����";
			}
			else
			{
				if (q % 100000 / 1000 > 10 && q % 100000 / 1000 < 20) {
					cout << " �����";
				}
				else
				{
					if (q >= 1000) {
						switch (q % 10000 / 1000)
						{
						case (1):cout << " ������";
							break;
						case (2):cout << " ������";
							break;
						case (3):cout << " ������";
							break;
						case (4):cout << " ������";
							break;
						case (5):cout << " �����";
							break;
						case (6):cout << " �����";
							break;
						case (7): cout << " �����";
							break;
						case (8): cout << " �����";
							break;
						case (9): cout << " �����";
							break;
						default: "";
							break;
						}
					}
				}
			}
			switch (q % 1000 / 100)
			{
			case (1):cout << " ���";
				break;
			case (2):cout << " ������";
				break;
			case (3):cout << " ������";
				break;
			case (4):cout << " ���������";
				break;
			case (5):cout << " �������";
				break;
			case (6):cout << " ��������";
				break;
			case (7): cout << " �������";
				break;
			case (8): cout << " ���������";
				break;
			case (9): cout << " ���������";
				break;
			default: "";
				break;
			}
			if (q % 100 < 21 && q % 100 > 10) {
				switch (q % 10)
				{
				case (1):cout << " ����������";
					break;
				case (2):cout << " ����������";
					break;
				case (3):cout << " ����������";
					break;
				case (4):cout << " ������������";
					break;
				case (5):cout << " ����������";
					break;
				case (6):cout << " �����������";
					break;
				case (7): cout << " ����������";
					break;
				case (8): cout << " ������������";
					break;
				case (9): cout << " ������������";
					break;
				default:
					break;
				}
			}
			else
			{
				switch (q % 100 / 10)
				{
				case (1):cout << " ������";
					break;
				case (2):cout << " ��������";
					break;
				case (3):cout << " ��������";
					break;
				case (4):cout << " �����";
					break;
				case (5):cout << " ���������";
					break;
				case (6):cout << " ����������";
					break;
				case (7): cout << " ���������";
					break;
				case (8): cout << " ����������";
					break;
				case (9): cout << " ��������";
					break;
				default:
					break;
				}
				switch (q % 10)
				{
				case (1):cout << " ����";
					break;
				case (2):cout << " ���";
					break;
				case (3):cout << " ���";
					break;
				case (4):cout << " ������";
					break;
				case (5):cout << " ����";
					break;
				case (6):cout << " �����";
					break;
				case (7): cout << " ����";
					break;
				case (8): cout << " ������";
					break;
				case (9): cout << " ������";
					break;
				default:
					break;
				}
			}
		}
		else
		{
			cout << "����� ��������� �����";
		}
	}
}
*/