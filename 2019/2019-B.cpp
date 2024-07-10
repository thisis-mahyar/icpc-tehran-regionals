#include <bits/stdc++.h>

using namespace std;

int main() {
    int c, n;
    cin >> c >> n;

    vector<int> p(n);

    for (int i = 0; i < n; ++i)
        cin >> p[i];

    int gold = 0;
    int money = c;

    for (int i = 0; i < n - 1; ++i) {
        if (p[i] < p[i + 1]) {
            // buy gold
            gold += money / p[i];
            money %= p[i];
        } else if (p[i] > p[i + 1]) {
            // sell gold
            money += gold * p[i];
            gold = 0;
        }
    }

    // on the last day, sell any remaining gold
    if (n > 0)
        money += gold * p[n - 1];

    cout << money;
}