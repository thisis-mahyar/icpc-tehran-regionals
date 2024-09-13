#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int price = 0;
    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;

        price += m;
    }

    cout << price << "\n";
}