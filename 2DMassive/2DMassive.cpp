
#include <iostream>
#include <string> 
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int i = 4;
    const int j = 3;
    int sum = 0;
    int perem = i * j;
    int srz = 0;

    int array[i][j] = { {5,9,14},{-6,12,101},{-100,80,60},{0,0,0} };

    for (int str = 0; str < i; str++)
    {
        for (int col = 0; col < j; col++)
            sum = sum + array[str][col];
        srz = sum / perem;
        cout << "Сумма значений массива = " << sum << " Среднее значение массива = " << srz << endl;

    };

    for (int str = 0; str < i; str++)
    {
        for (int col = 0; col < j; col++)
            if (array[str][col] > 0)
            {
                cout << "Положительные числа - " << array[str][col] << endl;
            };

    };

    for (int str = 0; str < i; str++)
    {
        for (int col = 0; col < j; col++)
            if (array[str][col] < 0)
            {
                cout << "Отрицательные числа - " << array[str][col] << endl;
            };
    };
}