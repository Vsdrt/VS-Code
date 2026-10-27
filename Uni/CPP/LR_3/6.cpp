#include <iostream>

using namespace std;

void solve(long long n) {
    long long number{ 1 };
    long long repeat{ 0 };
    long long printed{ 0 };

    while (printed < n) {
        cout << number << ' ';
        printed += 1;
        repeat += 1;
        if (repeat == number) {
            number += 1;
            repeat = 0;
        }
    }
    cout << '\n';
}

int main() {
    long long n;
    cout << "Введите n: ";
    cin >> n;
    solve(n);
    return 0;
}
