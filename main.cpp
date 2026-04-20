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
    std::uniform_int_distribution<> distrib(10, 15);
    /*for (int n = 0; n < 100; ++n) { std::cout << distrib(gen) << std::endl; };*/


    //for (int n = 0; n < 100; ++n) { cout << "*"; };

    int diagram[100];
    for (short num_masive = 0; num_masive < 100; num_masive++) {
            diagram[num_masive] = distrib(gen);
    }
    console_diagr_mass(diagram);
    //cout << console_diagr_mass(diagram) << endl;
    system("pause");
    return 0;
}