#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x;

    while (true) {
        cin >> x;

        if (x == 0)
            break;

        if (x <= 1000000)
            cout << x << "\n";
        else if (x <= 5000000)
            cout << x * 9 / 10 << "\n";
        else
            cout << x * 8 / 10 << "\n";
    }
}