#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Программу сделала \n";
	cout << "Программа для \n";

	int k;
	do
	{
		double r1, r2;
		cout << "Введите радиусы кольца: ";
		cin >> r1 >> r2;

		double x, y;
		cout << "Введите точку для проверки: ";
		cin >> x >> y;

		double r = sqrt(x * x + y * y);

		if (r1 <= r && r <= r2)
		{
			cout << "Точка внутри кольца.\n";
		}
		else
		{
			cout << "Точка вне кольца.\n";
		}
		cout << "Повторить ввод(1)?: ";
		cin >> k;
	}
	while (k == 1);

	system("pause");

	return 0;
}
