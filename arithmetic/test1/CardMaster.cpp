#include <bits/stdc++.h>
using namespace std;

#define M 998244353

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
    }

    vector<vector<long>> dp(n, vector<long>(2));
    dp[0][0] = 1;
    dp[0][1] = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) {
            dp[i][0] = (dp[i][0] + dp[i - 1][0]) % M;
        }
        if (a[i] != b[i - 1]) {
            dp[i][0] = (dp[i][0] + dp[i - 1][1]) % M;
        }
        if (b[i] != a[i - 1]) {
            dp[i][1] = (dp[i][1] + dp[i - 1][0]) % M;
        }
        if (b[i] != b[i - 1]) {
            dp[i][1] = (dp[i][1] + dp[i - 1][1]) % M;
        }
    }

    long plans = (dp[n - 1][0] + dp[n - 1][1]) % M;

    cout << plans << endl;

    return 0;
}
