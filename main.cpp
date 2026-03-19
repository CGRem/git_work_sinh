//проверка кириллицы
#include <ctime>
#include <iostream>
#include <cstdlib> // для system
#include <random>
#include "function.h"
//#include <string>
using namespace std;
int main(int argc, char* argv[])
{
    srand(time(0));
    setlocale(LC_ALL, "");

    std::random_device rd;  // Источник энтропии
    std::mt19937 gen(rd()); // Mersenne Twister, seed из random_device (вихрь Мерсенна)
    std::uniform_int_distribution<> distrib(1, 1000);
    for (int n = 0; n < 100; ++n) { std::cout << distrib(gen) << std::endl; };

    cout << "Привет мир" << endl;
    int rand_int = rand();
    cout << rand_int << endl;
    cout << func_r() << endl;
    //system("pause");
    return 0;
}