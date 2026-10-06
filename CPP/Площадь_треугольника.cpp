#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, S, p;
    cout << "Введите стороны треугольника a, b, c:" << "\n";
    cin >> a >> b >> c;
    p = (a + b + c) / 2.0;
    S = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << S << "\n";
    return 0;
}
