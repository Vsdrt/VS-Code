#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

long long irand(long long a, long long b) {
    return rand() % (b - a + 1) + a;
}

int main() {
    srand((unsigned)time(0));

    long long a, b, x, inp;
    cout << "Введите границы диапазона: ";
    cin >> a >> b;
    x = irand(a, b);

    do {
        cout << "Введите число из диапазона: ";
        cin >> inp;
        if (inp > x) {
            cout << "Перелет\n";
        } else if (inp < x) {
            cout << "Недолет\n";
        }

    } while (x != inp);

    cout << "Вы угадали число!" << '\n';

    return 0;
}
