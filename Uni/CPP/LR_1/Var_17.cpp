#include <algorithm>      // функции для работы с последовательностями
#include <cmath>          // основные математические функции
#include <iomanip>        // вывод чисел с определенной точностью
#include <iostream>       // ввод, вывод
#include <map>            // упорядоченные словари
#include <queue>          // очереди (FIFO - First In, First Out) + кучи
#include <set>            // упорядоченные множества
#include <stack>          // стеки (LIFO - Last In, First Out)
#include <string>         // строки
#include <unordered_map>  // хеш-словари
#include <unordered_set>  // хеш-множества
#include <utility>        // пары
#include <vector>         // динамические массивы

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    float m1{ 3.4 }, m2f{ 1.82 };

    float z1f = sqrt(9 * m1 * m1 - 18 * m1 + 4) / abs((3 * m1 - 2) / sqrt(m1));
    float z2f = sqrt(m1);

    return 0;
}
