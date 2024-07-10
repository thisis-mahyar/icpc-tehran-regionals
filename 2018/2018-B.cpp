#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        double x, y, d;
        cin >> x >> y;

        d = sqrt(x * x + y * y);

        if (d <= 10) sum += 10;
        else if (d <= 30) sum += 9;
        else if (d <= 50) sum += 8;
        else if (d <= 70) sum += 7;
        else if (d <= 90) sum += 6;
        else if (d <= 110) sum += 5;
        else if (d <= 130) sum += 4;
        else if (d <= 150) sum += 3;
        else if (d <= 170) sum += 2;
        else if (d <= 190) sum += 1;
    }

    cout << sum;
}