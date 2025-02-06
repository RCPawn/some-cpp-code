#include<bits/stdc++.h>
using namespace std;

int vowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 1;
    }
    return 0;
}

int vowelStrings(vector<string> &words, int l, int r) {
    int count = 0;
    for (int i = l; i <= r; ++i) {
        string s = words[i];
        if (vowel(s[0]) && vowel(s[s.size() - 1])) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<string> ve = {"hey","aeo","mu","ooo","artro"};

    int ans = vowelStrings(ve, 1, 4);
    cout << ans;

    return 0;
}
