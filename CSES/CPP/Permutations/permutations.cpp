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

    int n;
    cin >> n;

    if (n == 1) {
        cout << n << '\n';
        return 0;
    }

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << '\n';
        return 0;
    }

    for (int i = 2; i <= n; i += 2) {
        cout << i << ' ';
    }

    for (int i = 1; i <= n; i += 2) {
        cout << i << ' ';
    }

    cout << '\n';

    return 0;
}
