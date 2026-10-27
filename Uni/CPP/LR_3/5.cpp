#include <cmath>
#include <iostream>

using namespace std;

long double solve(long double x, long double eps) {
    long double y {1.0L};
    long double p;

    do {
        p = y;
        y = (p + x / p) / 2.0L;
    } while (fabs(y - p) >= eps);

    return y;
}

int main() {
    long double x, eps;
    cout << "Введите x и eps: ";
    cin >> x >> eps;
    cout << "y = " << solve(x, eps) << '\n';
    return 0;
}
