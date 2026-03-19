//проверка кириллицы
#include <ctime>
#include <iostream>
#include <cstdlib> // для system
//#include <string>
using namespace std;
int main()
{
    srand(time(0));
    setlocale(LC_ALL, "");
    cout << "Привет мир" << endl;
    int rand_int = rand();
    cout << rand_int << endl;
    //system("pause");
    return 0;
}