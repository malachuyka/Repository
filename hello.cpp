#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int b;
	cout << "\n������ a: ";
	cin >> b;
	cout << "����� a:\n";
	(b % 2 == 0) ? cout << "�����\n" : cout << "�������\n";
	(b <= 0) ? cout << "���������\n" : cout << "���������\n";
}
