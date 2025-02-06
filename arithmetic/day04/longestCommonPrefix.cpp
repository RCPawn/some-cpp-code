#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    sort(strs.begin(), strs.end());
    string st = strs.front(), en = strs.back();
    int i, n = min(st.size(), en.size());
    for (i = 0; i < n && st[i] == en[i]; ++i);
    return string(st, 0, i);
}

int main() {
    vector<string> strs = {"flower","flow","flight"};
    cout << longestCommonPrefix(strs);
    return 0;
}
