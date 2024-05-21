#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    double f;
    cin >> n >> f;

    double min_time = INT32_MAX;
    int min_index = 0;

    for (int i = 1; i <= n; ++i) {
        double x, v;
        cin >> x >> v;

        if ((f - x) / v < min_time) {
            min_time = (f - x) / v;
            min_index = i;
        }
    }

    cout << min_index << "\n";
}