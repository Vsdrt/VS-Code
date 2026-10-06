#include <iostream>
using namespace std;

int main()
{
    double C, F;
    cout << "Введите температуру по Фаренгейту:" << "\n";
    cin >> F;

    C = 5.0/9.0 * (F - 32);
    cout << C << "\n";
    return 0;
}
