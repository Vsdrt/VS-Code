#include <iostream>

using namespace std;

long long NOD(long long a, long long b) {
    if (a == 0) {
        return b;
    }
    if (b == 0) {
        return a;
    }
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }

    return a;
}

int main() {
    long long a, b;
    cout << "Введите два числа: ";
    cin >> a >> b;
    cout << "НОД этих чисел: " << NOD(a, b) << '\n';

    return 0;
}
