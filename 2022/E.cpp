#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    vector<vector<int>> deadlocks(n, vector<int>(m));
    // Always try to declare a vector rather than a static array
    // Otherwise, you'll encounter with stackoverflow error (exit code -1073741571 (0xC00000FD))
    // The reason is that vector uses heap memory, but static array uses stack memory

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            deadlocks[i][j] = 0;

    for (int i = 0; i < n; i++)
        cin >> grid[i];

    // LEFT2RIGHT
    for (int i = 0; i < n; i++) {
        bool flag = true;
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'o') {
                deadlocks[i][j] = 5; // 5 means it's a pillar, and it's already been deadlocked
                flag = false;
            } else if (!flag && grid[i][j] == '.')
                deadlocks[i][j]++;
        }
    }

    // RIGHT2LEFT
    for (int i = n - 1; i >= 0; i--) {
        bool flag = true;
        for (int j = m - 1; j >= 0; j--) {
            if (grid[i][j] == 'o') {
                deadlocks[i][j] = 5;
                flag = false;
            } else if (!flag && grid[i][j] == '.')
                deadlocks[i][j]++;
        }
    }

    // UP2DOWN
    for (int i = 0; i < m; i++) {
        bool flag = true;
        for (int j = 0; j < n; j++) {
            if (grid[j][i] == 'o') {
                deadlocks[j][i] = 5;
                flag = false;
            } else if (!flag && grid[j][i] == '.')
                deadlocks[j][i]++;
        }
    }

    // DOWN2UP
    for (int i = m - 1; i >= 0; i--) {
        bool flag = true;
        for (int j = n - 1; j >= 0; j--) {
            if (grid[j][i] == 'o') {
                deadlocks[j][i] = 5;
                flag = false;
            } else if (!flag && grid[j][i] == '.')
                deadlocks[j][i]++;
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            if (deadlocks[i][j] < 4)
                count++;
    }

    cout << count << "\n";
}