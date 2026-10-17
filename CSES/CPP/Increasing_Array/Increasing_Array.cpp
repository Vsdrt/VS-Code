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

    long long res{};
    int n, x;
    vector<int> data{};
    cin >> n;

    for (int i = 1; i <= n; i ++){
        cin >> x;
        data.push_back(x);
    }

    for (int i = 0; i < n - 1; i++) {
        if (data[i] > data[i + 1]) {
            res += data[i] - data[i + 1];
            data[i + 1] = data[i];
        }
    }

    cout << res << '\n';

    return 0;
}
