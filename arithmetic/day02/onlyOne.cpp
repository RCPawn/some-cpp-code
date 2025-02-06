#include<bits/stdc++.h>
using namespace std;

int only(vector<int> &n) {
    int ans = 0;
    for (auto e: n) ans ^= e;
    return ans;
}

int main() {
    vector<int> n = {4, 1, 2, 1, 2, 4, 5};
    int ans = only(n);

    cout << ans;

    return 0;
}
