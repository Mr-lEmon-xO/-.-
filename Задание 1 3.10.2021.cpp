
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");

	int t, d, k;
	cin >> t;
	d = pow(t, 2);
	k = sqrt(d); // abs круче
	if (k > 99 && k < 1000) {
		cout << t << "Да, Число Трёхзначное";
	}
	else
	{
		cout << t << "Нет, Число не Трёхзначное";
	}
}
