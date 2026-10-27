#include <cmath>
#include <iostream>

using namespace std;

long double solveIter(long double x, int k, int n) {
    long double y = 1.0L;
    for (int i = 1; i <= n; ++i) {
        y = ((k - 1) * y + x / pow(y, k - 1)) / k;
    }
    return y;
}

long double solveRec(long double x, int k, int n) {
    if (n == 0) {
        return 1.0L;
    }
    long double prev = solveRec(x, k, n - 1);
    return ((k - 1) * prev + x / pow(prev, k - 1)) / k;
}

int main() {
    long double x;
    int k, n;

    cout << "Введите x, k, n: ";
    cin >> x >> k >> n;

    cout << "Итеративно: " << solveIter(x, k, n) << '\n';
    cout << "Рекурсивно: " << solveRec(x, k, n) << '\n';

    return 0;
}
