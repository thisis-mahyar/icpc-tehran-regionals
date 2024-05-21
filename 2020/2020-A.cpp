#include <bits/stdc++.h>

using namespace std;

int main() {
    int p, q;
    cin >> p >> q;

    if (p <= 50 && q <= 10)
        cout << "White\n";
    else if (q > 30)
        cout << "Red\n";
    else
        cout << "Yellow\n";
}