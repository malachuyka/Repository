#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int abc, acb;
    cout << "????????? ?????:";
    cin >> abc;
    cout << endl;
    acb = (abc / 100) * 100 + (abc % 10) * 10 + (abc % 100 / 10);
    cout << "???????? ??dfdf???fdf ???:" << acb;
    return 0;
}
