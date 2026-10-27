#include <iostream>

using namespace std;

long double solve(long double x, long double y, long double z) {
    if (y > x){
        x = y;
    }
    if (z > x){
        x = z;
    }
    return x;
}

int main() {
    long double x{}, y{}, z{};
    cout << "Введите три числа: ";
    cin >> x >> y >> z;
    cout << "Максимальное из трех чисел: " << solve(x, y, z) << '\n';
    return 0;
}
