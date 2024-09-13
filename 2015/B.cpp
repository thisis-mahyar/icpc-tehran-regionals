#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;

        bool b1 = s[0] == s[1] && s[0] >= '1' && s[0] <= '9' && s[1] >= '1' && s[1] <= '9';
        bool b2 = s[2] >= '1' && s[2] <= '9' && s[3] >= '1' && s[3] <= '9';
        bool b3 = s[4] >= 'A' && s[4] <= 'Z';
        bool b4 = s[5] >= '1' && s[5] <= '9' && s[6] >= '1' && s[6] <= '9' && s[7] >= '1' && s[7] <= '9';

        if (b1 && b2 && b3 && b4)
            cout << s << "\n";
    }
}