#include <algorithm>
#include <iostream>

using namespace std;

bool solve(long double x, long double a, long double b) {
    return x < min(a, b) || x > max(a, b);
}

int main() {
    long double a, b, x;
    cout << "Введите границы диапазона: ";
    cin >> a >> b;

    do {
        cout << "Введите число: ";
        cin >> x;
    } while (solve(x, a, b));

    cout << x << " в диапазоне [" << a << ';' << b << ']' << '\n';
    return 0;
}
