// Homework 7.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

bool sqrt(int a)
{
	for (int i = 1; i < a; i++)
	{
		if (i*i == a)
			return true;
		else if (i*i > a)
			return false;
	}
}

int countSqrt(int a, int b, int c)
{
	int count = 0;
	if (sqrt(a))
		count++;
	if (sqrt(b))
		count++;
	if (sqrt(c))
		count++;
	return count;
}

void countSqrt(int a, int b, int c, int *t)
{
	int count = 0;
	if (sqrt(a))
		count++;
	if (sqrt(b))
		count++;
	if (sqrt(c))
		count++;
	*t = count;
}

void countSqrt(int a, int b, int c, int &p)
{
	if (sqrt(a))
		p++;
	if (sqrt(b))
		p++;
	if (sqrt(c))
		p++;
}

int main()
{
	int p = 0, t = 0, choose, a, b, c;
	std::cout << "Choose one of the following options 1, 2 or 3: ";
	std::cin >> choose;
	std::cout << "Enter a: a = ";
	std::cin >> a;
	std::cout << "Enter b: b = ";
	std::cin >> b;
	std::cout << "Enter c: c = ";
	std::cin >> c;
	switch (choose)
	{
	case 1:
	{
		std::cout << "count = " << countSqrt(a, b, c) << "\n";
		break;
	}
	case 2:
	{
		countSqrt(a, b, c, &t);
		std::cout << "count = " << t << "\n";
		break;
	}
	case 3:
	{
		countSqrt(a, b, c, p);
		std::cout << "count = " << p << "\n";
		break;
	}
	default:
		std::cout << "Wrong option!\n";
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
