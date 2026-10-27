#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    cout << "Введите значение переменной m (1.82 или 3.4):" << '\n';

    long double m;
    cin >> m;

    float m1f = (float)m;

    float Z1f = (sqrt(pow(3.0f * m1f + 2.0f, 2.0f) - 24.0f * m1f)) /
                fabs(3.0f * sqrt(m1f) - 2.0f / sqrt(m1f));
    float Z2f = sqrt(m1f);

    double m1d = (double)m;

    double Z1d =
        (sqrt(pow(3.0 * m1d + 2.0, 2.0) - 24.0 * m1d)) / fabs(3.0 * sqrt(m1d) - 2.0 / sqrt(m1d));
    double Z2d = sqrt(m1d);

    cout << fixed << setprecision(15);

    cout << "|Z1f - Z2f| = " << fabs(Z1f - Z2f) << '\n';
    cout << "|Z1d - Z2d| = " << fabs(Z1d - Z2d) << '\n';
    cout << "|Z1f - Z1d| = " << fabs(Z1f - Z1d) << '\n';
    return 0;
}
