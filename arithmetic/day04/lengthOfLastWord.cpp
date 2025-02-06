#include<bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) {
    int l = 0, r = s.size() - 1;
    while (s[r] == ' ') r--;
    while (r > 0 && s[r] != ' ') {
        l++;
        r--;
    }
    return l;
}

int main() {
    string s = "hello world";
    cout << lengthOfLastWord(s);
    return 0;
}
