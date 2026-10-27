#include <iostream>

using namespace std;

long double solve(long long n) {
    long double P{};

    for (long long i = 1; i < n + 1; i ++){
        P += 1 / ((long double)i * (i + 1));
    }

    return P;
}

int main() {
    long long n;
    cout << "Введите n: ";
    cin >> n;
    cout << "Р: " << solve(n) << '\n';
    return 0;
}
