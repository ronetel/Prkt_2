
#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	while (true)
	{
		cout << ("Выберите операцию");
		cout << ("1.Сложение ");
		cout << ("2.Вычитание");
		cout << ("3.Умножение");
		cout << ("4.Деление");
		cout << ("5.Возвести в степень N первое число");
		cout << ("6.Найти квадратный корень");
		cout << ("7.Найти 1 процент из числа");
		cout << ("8.Факториал");
		cout << ("9.Выйти из программы\n");
		int ch;
		int x;
		int y;
		int num;
		cin >> ch;

		if (ch == 1)
		{
			cout << ("Введите первое число");
			cin >> x;
			cout << ("Введите второе число");
			cin >> y;
			num = x + y;
			cout << ("Ваше число " + num);
		}

		if (ch == 2)
		{
			cout << ("Введите первое число");
			cin >> x;
			cout << ("Введите второе число");
			cin >> y;
			num = x - y;
			cout << ("Ваше число " + num);

		}

		if (ch == 3)
		{
			cout << ("Введите первое число");
			cin >> x;
			cout << ("Введите второе число");
			cin >> y;
			num = x * y;
			cout << ("Ваше число " + num);

		}

		if (ch == 4)
		{
			cout << ("Введите первое число");
			cin >> x;
			cout << ("Введите второе число");
			cin >> y;
			num = x / y;
			cout << ("Ваше число " + num);

		}

		if (ch == 5)
		{
			cout << ("Введите число");
			cin >> x;
			cout << ("Введите степень");
			cin >> y;
			num = pow(x, y);
			cout << ("Ваше число " + num);
		}

		if (ch == 6)
		{
			cout << ("Введите первое число");
			cin >> x;
			num = sqrt(x);
			cout << ("Ваше число " + num);
		}


		if (ch == 7)
		{
			cout << ("Введите первое число");
			cin >> x;
			cout << (float)x / 100;
		}

		if (ch == 8)
		{
			cout << ("Введите первое число");
			cin >> x;
			for (int i = 1; i <= x; i++) {
				num = num * i;
			}
			cout << ("Ваше число " + num);

		}

		if (ch == 9)
		{
			cout << ("Завершение программы");
			break;
		}

	}
