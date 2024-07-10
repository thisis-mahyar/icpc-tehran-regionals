#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n;

    while (true) {
        cin >> m >> n;
        if (m == 0 && n == 0)
            break;

        vector<int> a(m);
        for (int i = 0; i < m; ++i)
            cin >> a[i];

        int count = 0;
        for (int i = 0; i < n; ++i) {
            bool flag = true;
            for (int j = 0; j < m; ++j) {
                int x;
                cin >> x;

                if (x > a[j])
                    flag = false;
            }

            if (flag) count++;
        }

        cout << count << "\n";
    }
}