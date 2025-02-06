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

int romanToInt(string s) {
    int ans = 0, n = s.size();
    for (int i = 0; i < n; ++i) {
        int val = view[s[i]];
        //如果一个数的右侧数字比它大
        if (i < n - 1 && val < view[s[i + 1]]) {
            ans -= val;
        } else {
            ans += val;
        }
    }
    return ans;
}

int main() {
    string s = "MCMXCIV";
    cout << romanToInt(s);
    return 0;
}

