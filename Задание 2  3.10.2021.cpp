/*
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
int day, month, h;
cout << "������� ���� ";
cin >> day;
cout << "������� ����� ";
cin >> month;
if (day > 31 && month == 1)
cout << "�� ����� ������������ ����";
else
{
	if (day > 28 && month == 2)
		cout << "�� ����� ������������ ����";
	else
	{
		if (day > 31 && month == 3)
			cout << "�� ����� ������������ ����";
		else
		{
			if (day > 30 && month == 4)
				cout << "�� ����� ������������ ����";
			else
			{
				if (day > 31 && month == 5)
					cout << "�� ����� ������������ ����";
				else
				{
					if (day > 30 && month == 6)
						cout << "�� ����� ������������ ����";
					else
					{
						if (day > 31 && month == 7)
							cout << "�� ����� ������������ ����";
						else
						{
							if (day > 31 && month == 8)
								cout << "�� ����� ������������ ����";
							else
							{
								if (day > 30 && month == 9)
									cout << "�� ����� ������������ ����";
								else
								{
									if (day > 31 && month == 10)
										cout << "�� ����� ������������ ����";
									else
									{
										if (day > 30 && month == 11)
											cout << "�� ����� ������������ ����";
										else
										{
											if (day > 31 && month == 12)
												cout << "�� ����� ������������ ����";
											else
											{
												if (month > 12)
													cout << "�� ����� ������������ ����"; //�������� �� ���������� ����
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