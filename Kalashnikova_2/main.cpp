#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "��������� ������� \n";
	cout << "��������� ��� \n";

	int k;
	do
	{
		double r1, r2;
		cout << "������� ������� ������: ";
		cin >> r1 >> r2;

		double x, y;
		cout << "������� ����� ��� ��������: ";
		cin >> x >> y;

		double r = sqrt(x * x + y * y);

		if (r1 <= r && r <= r2)
		{
			cout << "����� ������ ������.\n";
		}
		else
		{
			cout << "����� ��� ������.\n";
		}
		cout << "��������� ����(1)?: ";
		cin >> k;
	}
	while (k == 1);

	system("pause");

	return 0;
}
