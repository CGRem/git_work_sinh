//проверка кириллицы
#include <iostream>
#include <cstdlib> // для system
//#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Привет мир" << endl;
    system("pause");
    return 0;
}