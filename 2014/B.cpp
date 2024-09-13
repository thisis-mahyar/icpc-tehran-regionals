#include <bits/stdc++.h>

using namespace std;

int main() {
    int r, g, b;

    while (true) {
        cin >> r >> g >> b;

        if (r == -1 && g == -1 && b == -1)
            break;

        int colors[16][3] = {
                {255, 255, 255},
                {192, 192, 192},
                {128, 128, 128},
                {0,   0,   0},
                {255, 0,   0},
                {128, 0,   0},
                {255, 255, 0},
                {128, 128, 0},
                {0,   255, 0},
                {0,   128, 0},
                {0,   255, 255},
                {0,   128, 128},
                {0,   0,   255},
                {0,   0,   128},
                {255, 0,   255},
                {128, 0,   128}
        };

        int d = INT32_MAX;
        int z = -1;

        for (int i = 0; i < 16; ++i) {
            int dd = (r - colors[i][0]) * (r - colors[i][0]) + (g - colors[i][1]) * (g - colors[i][1]) +
                     (b - colors[i][2]) * (b - colors[i][2]);
            if (dd < d) {
                d = dd;
                z = i;
            }
        }
        z++;

        if (z == 1) cout << "White\n";
        else if (z == 2) cout << "Silver\n";
        else if (z == 3) cout << "Gray\n";
        else if (z == 4) cout << "Black\n";
        else if (z == 5) cout << "Red\n";
        else if (z == 6) cout << "Maroon\n";
        else if (z == 7) cout << "Yellow\n";
        else if (z == 8) cout << "Olive\n";
        else if (z == 9) cout << "Lime\n";
        else if (z == 10) cout << "Green\n";
        else if (z == 11) cout << "Aqua\n";
        else if (z == 12) cout << "Teal\n";
        else if (z == 13) cout << "Blue\n";
        else if (z == 14) cout << "Navy\n";
        else if (z == 15) cout << "Fuchsia\n";
        else if (z == 16) cout << "Purple\n";
    }
}