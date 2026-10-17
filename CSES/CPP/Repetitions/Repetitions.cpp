#include <algorithm>      // функции для работы с последовательностями
#include <cmath>          // основные математические функции
#include <cstdint>        // типы данных с фиксированным размером
#include <deque>          // двусторонняя очередь
#include <iomanip>        // вывод чисел с определенной точностью
#include <iostream>       // ввод, вывод
#include <map>            // упорядоченный словарь
#include <numeric>        // численные операции над последовательностями
#include <queue>          // очередь (FIFO - First In, First Out) + куча
#include <set>            // упорядоченное множество + множество с повторами
#include <stack>          // стек (LIFO - Last In, First Out)
#include <string>         // строки
#include <unordered_map>  // хеш-словарь
#include <unordered_set>  // хеш-множество
#include <utility>        // пара
#include <vector>         // динамический массив

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s{};
    cin >> s;

    int l = 0, r = 0, max_len = 0;

    while (l <= r && r < (long long)s.length()) {
        if (s[l] == s[r]) {
            max_len = max(max_len, r - l + 1);
            r++;
        } else {
            l = r;
        }
    }

    cout << max_len << '\n';

    return 0;
}
