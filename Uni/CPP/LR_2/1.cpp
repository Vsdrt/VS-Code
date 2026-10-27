#include <iostream>  // ввод, вывод

using namespace std;

long double solve(long double x) {
    if (x <= -2.0L) {
        return 0.0L;
    } else if (x <= 0.0L) {
        return x + 2.0L;
    } else if (x <= 2.0L) {
        return -2.0L * x + 2.0L;
    } else {
        return -2.0L;
    }
}

int main() {
    long double x{};
    cout << "Введите x: ";
    cin >> x;

    cout << "y: " << solve(x) << '\n';

    return 0;
}
