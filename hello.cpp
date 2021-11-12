#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int b;
	cout << "\nВведіть a: ";
	cin >> b;
	cout << "Число a:\n";
	(b % 2 == 0) ? cout << "Парне\n" : cout << "Непарне\n";
	(b <= 0) ? cout << "Негативне\n" : cout << "Позитивне\n";
}
