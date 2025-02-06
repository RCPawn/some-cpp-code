#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, a[100010];
    a[1] = 1;
    a[2] = 2;
    cin >> n;

    for (int i = 3; i <= n; ++i) {
        a[i] = a[i - 1] + a[i - 2];
    }

    cout << a[n];

    return 0;
}
