#include <iostream>

using namespace std;

bool solve(long double x, long double y, long double r) {
    if (x >= -r && x <= r && y >= -r && y <= r) {
        if (((x - r) * (x - r) + (y - r) * (y - r) >= r * r) &&
            ((x + r) * (x + r) + (y + r) * (y + r) >= r * r)) {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}

int main() {
    long double x{}, y{}, r{};
    cout << "Введите x, y, r: ";
    cin >> x >> y >> r;

    switch (solve(x, y, r)) {
    case 0:
        cout << "Точка не попадает в область" << '\n';
        break;
    case 1:
        cout << "Точка попадает в область" << '\n';
        break;
    }

    return 0;
}
