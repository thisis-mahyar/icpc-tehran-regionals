#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    k += 60;

    if (n <= k)
        cout << n * 1500;
    else
        cout << k * 1500 + (n - k) * 3000;
}