#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int solve(double a, double b, double c) {
    int ac = (int)a;
    int bc = (int)b;
    int cc = (int)c;
    return (ac | bc) & ~(ac | cc);
}

double F(double x, double a, double b, double c) {
    if (x + 10 < 0 && b != 0) {
        return a * x * x - c * x + b;
    } else if (x + 10 > 0 && b == 0) {
        return (x - a) / (x - c);
    } else {
        return -x / (a - c);
    }
}

int main() {
    double a, b, c;
    double xStart, xEnd, dx;

    cout << "Введите a, b, c: ";
    cin >> a >> b >> c;
    cout << "Введите Xнач, Xкон, dX: ";
    cin >> xStart >> xEnd >> dx;

    int mode = solve(a, b, c);

    cout << fixed << setprecision(4);

    long long steps = (long long)(round((xEnd - xStart) / dx)); // сколько шагов помещается в отрезок

    for (long long i = 0; i <= steps; ++i) {
        double x = xStart + i * dx; // не линейное накопление ошибки, а единоразовое
        double value = F(x, a, b, c);

        if (mode == 0) {
            value = (int)value;
        }

        cout << x << " | " << value << '\n';
    }

    return 0;
}
