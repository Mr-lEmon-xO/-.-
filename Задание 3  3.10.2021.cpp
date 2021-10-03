#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int q;
	cin >> q;
	if (q == 0) {
		cout << "Нуль";
	}
	else
	{
		if (q <= 10000000) {
			switch (q / 1000000)
			{
			case (1):cout << "Один Милион";
				break;
			case (2):cout << "Два Милиона";
				break;
			case (3):cout << "Три Милиона";
				break;
			case (4):cout << "Четыре Милиона";
				break;
			case (5):cout << "Пять Милионов";
				break;
			case (6):cout << "Шесть Милионов";
				break;
			case (7): cout << "Семь Милионов";
				break;
			case (8): cout << "Восемь Милионов";
				break;
			case (9): cout << "Девять Милионов";
				break;
			case (10): cout << "Десять Милионов";
				break;
			default: "";
				break;
			}
			switch (q % 1000000 / 100000)
			{
			case (1):cout << " Сто";
				break;
			case (2):cout << " Двести";
				break;
			case (3):cout << " Триста";
				break;
			case (4):cout << " Четыреста";
				break;
			case (5):cout << " Пятьсот";
				break;
			case (6):cout << " Шестьсот";
				break;
			case (7): cout << " Семьсот";
				break;
			case (8): cout << " Восемьсот";
				break;
			case (9): cout << " Девятисот";
				break;
			default: "";
				break;
			}
			if (q % 100000 / 1000 <= 20)
			{
				switch (q % 100000 / 1000) {
				case (10): cout << " Десять";
					break;
				case (11): cout << " Одинадцать";
					break;
				case (12): cout << " Двенадцать";
					break;
				case (13): cout << " Тринадцать";
					break;
				case (14): cout << " Четырнадцать";
					break;
				case (15): cout << " Пятьнадцать";
					break;
				case (16): cout << " Шестьнадцать";
					break;
				case (17): cout << " Семнадцать";
					break;
				case (18): cout << " Восемнадцать";
					break;
				case (19): cout << " Девятнадцать";
					break;
				case (20): cout << "Двадцать";
				}
			}
			else
			{
				switch (q % 100000 / 10000) {
				case (3):cout << " Тридцать";
					break;
				case (4):cout << " Сорок";
					break;
				case (5):cout << " Пятьдесят";
					break;
				case (6):cout << " Шестьдесят";
					break;
				case (7): cout << " Семьдесят";
					break;
				case (8): cout << " Восемьдесят";
					break;
				case (9): cout << " Девятисто";
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
				case (1):cout << " Одна";
					break;
				case (2):cout << " Две";
					break;
				case (3):cout << " Три";
					break;
				case (4):cout << " Четыре";
					break;
				case (5):cout << " Пять";
					break;
				case (6):cout << " Шесть";
					break;
				case (7): cout << " Семь";
					break;
				case (8): cout << " Восемь";
					break;
				case (9): cout << " Девять";
					break;
				default: "";
					break;
				}
			}
			if (q == 10000 || q == 100000) {
				cout << " Тысяч";
			}
			else
			{
				if (q % 100000 / 1000 > 10 && q % 100000 / 1000 < 20) {
					cout << " Тысяч";
				}
				else
				{
					if (q >= 1000) {
						switch (q % 10000 / 1000)
						{
						case (1):cout << " Тысяча";
							break;
						case (2):cout << " Тысячи";
							break;
						case (3):cout << " Тысячи";
							break;
						case (4):cout << " Тысячи";
							break;
						case (5):cout << " Тысяч";
							break;
						case (6):cout << " Тысяч";
							break;
						case (7): cout << " Тысяч";
							break;
						case (8): cout << " Тысяч";
							break;
						case (9): cout << " Тысяч";
							break;
						default: "";
							break;
						}
					}
				}
			}
			switch (q % 1000 / 100)
			{
			case (1):cout << " Сто";
				break;
			case (2):cout << " Двести";
				break;
			case (3):cout << " Триста";
				break;
			case (4):cout << " Четыреста";
				break;
			case (5):cout << " Пятьсот";
				break;
			case (6):cout << " Шестьсот";
				break;
			case (7): cout << " Семьсот";
				break;
			case (8): cout << " Восемьсот";
				break;
			case (9): cout << " Девятьсот";
				break;
			default: "";
				break;
			}
			if (q % 100 < 21 && q % 100 > 10) {
				switch (q % 10)
				{
				case (1):cout << " Одинадцать";
					break;
				case (2):cout << " Двенадцать";
					break;
				case (3):cout << " Тринадцать";
					break;
				case (4):cout << " Четырнадцать";
					break;
				case (5):cout << " Пятнадцать";
					break;
				case (6):cout << " Шестнадцать";
					break;
				case (7): cout << " Семнадцать";
					break;
				case (8): cout << " Восемнадцать";
					break;
				case (9): cout << " Девятнадцить";
					break;
				default:
					break;
				}
			}
			else
			{
				switch (q % 100 / 10)
				{
				case (1):cout << " Десять";
					break;
				case (2):cout << " Двадцать";
					break;
				case (3):cout << " Тридцать";
					break;
				case (4):cout << " Сорок";
					break;
				case (5):cout << " Пятьдесят";
					break;
				case (6):cout << " Шестьдесят";
					break;
				case (7): cout << " Семьдесят";
					break;
				case (8): cout << " Восемдесят";
					break;
				case (9): cout << " Девносто";
					break;
				default:
					break;
				}
				switch (q % 10)
				{
				case (1):cout << " Один";
					break;
				case (2):cout << " Два";
					break;
				case (3):cout << " Три";
					break;
				case (4):cout << " Четыре";
					break;
				case (5):cout << " Пять";
					break;
				case (6):cout << " Шесть";
					break;
				case (7): cout << " Семь";
					break;
				case (8): cout << " Восемь";
					break;
				case (9): cout << " Девять";
					break;
				default:
					break;
				}
			}
		}
		else
		{
			cout << "Число превышает лимит";
		}
	}
}
