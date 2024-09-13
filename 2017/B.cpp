#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;

    while (true) {
        getline(cin, s);

        if (s == "0000 0000 0000 0000") break;

        vector<int> v;
        for (char ch: s)
            if (ch != ' ')
                v.push_back(ch - '0');

        int sum = 0;

        for (int i = 0; i < v.size(); ++i) {
            if (i % 2 == 0) {
                v[i] *= 2;
                if (v[i] > 9)
                    v[i] -= 9;

                sum += v[i];
            } else
                sum += v[i];
        }

        sum % 10 == 0 ? cout << "Yes\n" : cout << "No\n";
    }
}