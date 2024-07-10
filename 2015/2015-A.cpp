#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k;

    while (true) {
        cin >> n >> m >> k;

        if (n == 0 && m == 0 && k == 0)
            break;

        if (m >= n / 2 + 1)
            cout << "0\n";
        else if (n / 2 - m + 1 <= n - m - k)
            cout << n / 2 - m + 1 << "\n";
        else
            cout << "-1\n";
    }
}