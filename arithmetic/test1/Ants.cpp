#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    int p[n];

    int MIN = 0, MAX = 0;
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        MIN = max(MIN, min(p[i], l - p[i]));
        MAX = max(MAX, max(p[i], l - p[i]));
    }

    cout << MIN << " " << MAX;

    return 0;
}
