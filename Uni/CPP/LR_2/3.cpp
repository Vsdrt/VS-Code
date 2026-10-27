#include <iostream>

using namespace std;

string solve(int n) {
    if (n % 100 >= 11 && n % 100 <= 14) {
        return " лет";
    }

    switch (n % 10) {
    case 1:
        return "год";
    case 2:
    case 3:
    case 4:
        return "года";
    default:
        return "лет";
    }
}

int main() {
    int n{};
    cout << "Введите возраст человека (0; 100): ";
    cin >> n;
    cout << "Мне " << n << ' ' << solve(n) << '\n';
    return 0;
}
