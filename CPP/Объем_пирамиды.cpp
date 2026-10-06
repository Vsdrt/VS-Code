#include <iostream>

using namespace std;

int main()
{
    double V, a, b, h;
    cout << "Введите a, b, h треугольной пирамиды:" << "\n";
    cin >> a >> b >> h;

    V = (h * (a * b)) / 6.0;
    cout << V << "\n";
    return 0;
}

