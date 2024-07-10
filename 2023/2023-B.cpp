#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;

        sum += m % 2 == 0 ? m : m + 1;
    }

    cout << sum / 2;
}