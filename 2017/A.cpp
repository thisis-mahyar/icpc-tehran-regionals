#include <bits/stdc++.h>

using namespace std;

int main() {
    int c, d;

    while (true) {
        cin >> c >> d;
        if (c == 0 && d == 0)
            break;

        int x = 30 * c + 40 * d;
        int y = 35 * c + 30 * d;
        int z = 40 * c + 20 * d;

        cout << min(x, min(y, z)) << "\n";
    }
}