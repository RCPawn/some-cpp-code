#include<bits/stdc++.h>
using namespace std;

int maxScore(string s) {
    int ans = 0;
    for (int i = 1; i < s.size(); ++i) {
        int count = 0;
        for (int j = 0; j < i; ++j) {
            if (s[j] == '0') count++;
        }
        for (int j = i; j < s.size(); ++j) {
            if (s[j] == '1') count++;
        }
        ans = max(ans, count);
    }
    return ans;
}

int main() {
    string s = "00111";
    cout << maxScore(s);

    return 0;
}
