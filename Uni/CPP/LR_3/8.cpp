#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

double lnSolve(double x, double eps, long long& count) {
    double slagaemoe = x - 1.0;
    double sum = 0.0;
    count = 0;

    while (fabs(slagaemoe) > eps) {
        sum += slagaemoe;
        count += 1;
        slagaemoe *= -1.0 * (x - 1.0) * count / (count + 1);
    }

    return sum;
}

int main() {
    double xStart, xEnd, dx, eps;
    cout << "Введите Xнач, Xкон, dX, eps: ";
    cin >> xStart >> xEnd >> dx >> eps;

    long long steps = (long long)round((xEnd - xStart) / dx);

    cout << fixed << setprecision(6);

    cout << setw(10) << "x"
         << " | " << setw(15) << "ln(x)"
         << " | " << setw(8) << "N" << '\n';
    cout << string(38, '-') << '\n';

    for (long long i = 0; i <= steps; ++i) {
        double x = xStart + i * dx;

        long long count = 0;
        double value = lnSolve(x, eps, count);

        cout << setw(10) << x << " | " << setw(15) << value << " | " << setw(8) << count << '\n';
    }

    return 0;
}
