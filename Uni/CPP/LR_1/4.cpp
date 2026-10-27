#include <iostream>

using namespace std;

int main() {
    int h1{}, m1{}, s1{}, h2{}, m2{}, s2{};

    cout << "Введите часы, минуты и секунды начала промежутка: " << endl;
    cin >> h1 >> m1 >> s1;
    cout << "Введите часы, минуты и секунды конца промежутка: " << endl;
    cin >> h2 >> m2 >> s2;

    int t1 = 3600 * h1 + 60 * m1 + s1;
    int t2 = 3600 * h2 + 60 * m2 + s2;

    int res = abs(t2 - t1);
    cout << "Продолжительность промежутка в часах, минутах и секундах:" << '\n';
    cout << res / 3600 << ' ' << (res % 3600) / 60 << ' ' << res % 60 << '\n';

    return 0;
}
