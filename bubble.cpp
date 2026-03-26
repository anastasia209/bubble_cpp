#include <Windows.h>
#include <iostream>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int mass[10]{ 10, 3, 4, 1, 8, 9, 7, 2, 6, 5 };

	std::cout << "Массив до сортировки: ";
	for (int number : mass) {
		std::cout << number << " ";

	}
	std::cout << std::endl;

	for (int a = 0; a < 10 - 1; a++)
	{
		for (int b = 0; b < 10 - a - 1; b++)
		{
			if (mass[b] < mass[b + 1]) {
				int n = mass[b];
				mass[b] = mass[b + 1];
				mass[b + 1] = n;
			}
		}
	}

	std::cout << "Массив после сортировки: ";

	for (int a = 0; a < 10; a++)
	{
		std::cout << mass[a] << " ";
	}
	std::cout << std::endl;


	return 0;
}
