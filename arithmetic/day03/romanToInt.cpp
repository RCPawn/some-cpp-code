#include<bits/stdc++.h>
using namespace std;

unordered_map<char, int> view = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
};

int main() {
    string s = "MCMXCIV";

    int ans = 0, n = s.length();
    for (int i = 0; i < n; ++i) {
        int value = view[s[i]];
        if (i < n - 1 && value < view[s[i + 1]]) {
            ans -= value;
        } else {
            ans += value;
        }
    }

    cout << ans;

    return 0;
}
