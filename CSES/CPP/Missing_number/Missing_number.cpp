#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n{}, sm_full{}, sm_actual{}, inp{};
    cin >> n;

    while (cin >> inp) {
        sm_actual += inp;
    }

    sm_full = (1 + n) * n / 2;

    cout << sm_full - sm_actual << '\n';
    return 0;
}
