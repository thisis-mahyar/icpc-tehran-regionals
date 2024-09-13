#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int x;
    cin >> x;

    int sum = 0;
    bool flag = true;

    for (int i = 1; i < n; ++i) {
        int y;
        cin >> y;

        if (x > y)
            x = y;
        else
            flag = false;

        if (!flag)
            sum += y - x;
    }

    cout << sum;
}