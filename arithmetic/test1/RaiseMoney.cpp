#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    int plans = 0;
    cin >> n >> x >> y;

    for (int i = 0; i < x; ++i) {
        int k = n - 2 * i;
        if (k >= 0 && k % 3 == 0 && k / 3 <= y) {
            plans++;
        }
    }

    cout << plans;

    return 0;
}
