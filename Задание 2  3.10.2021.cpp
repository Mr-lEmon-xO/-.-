/*
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
int day, month, h;
cout << "Введите день ";
cin >> day;
cout << "Введите месяц ";
cin >> month;
if (day > 31 && month == 1)
cout << "Вы ввели неправильную дату";
else
{
	if (day > 28 && month == 2)
		cout << "Вы ввели неправильную дату";
	else
	{
		if (day > 31 && month == 3)
			cout << "Вы ввели неправильную дату";
		else
		{
			if (day > 30 && month == 4)
				cout << "Вы ввели неправильную дату";
			else
			{
				if (day > 31 && month == 5)
					cout << "Вы ввели неправильную дату";
				else
				{
					if (day > 30 && month == 6)
						cout << "Вы ввели неправильную дату";
					else
					{
						if (day > 31 && month == 7)
							cout << "Вы ввели неправильную дату";
						else
						{
							if (day > 31 && month == 8)
								cout << "Вы ввели неправильную дату";
							else
							{
								if (day > 30 && month == 9)
									cout << "Вы ввели неправильную дату";
								else
								{
									if (day > 31 && month == 10)
										cout << "Вы ввели неправильную дату";
									else
									{
										if (day > 30 && month == 11)
											cout << "Вы ввели неправильную дату";
										else
										{
											if (day > 31 && month == 12)
												cout << "Вы ввели неправильную дату";
											else
											{
												if (month > 12)
													cout << "Вы ввели неправильную дату"; //Проверка на правильную дату
												else
												{
													h = 366 - (month - 1) * 31 + month / 2 - day;
													cout << h;
												}
											}
										}

									}
								}
							}

						}
					}
				}
			}
		}
	}
}
}
*/