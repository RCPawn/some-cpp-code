#include<bits/stdc++.h>
using namespace std;

/*int Index(string s, string t) {
    int j, n = s.size(), m = t.size();
    for (int i = 0; i <= n - m; ++i) {
        for (j = 0; j < m; ++j) {
            if (s[i + j] != t[j])
                break;
        }
        if (j == m) return i;
    }
    return -1;
}

int Index(string s, string t) {
    int i = 0, n = s.size(), m = t.size();
    while (i <= n - m) {
        if (s.compare(i, m, t) != 0) ++i;
        else return i;
    }
    return -1;
}*/

/*int Index(string s, string t) {
    int n = s.size(), m = t.size();
    for(int i = 0; i <= n - m; i++){
        int j = i, k = 0;
        while(k < m && s[j] == t[k]){
            j++;
            k++;
        }
        if(k == m) return i;
    }
    return -1;
}*/

int Index(string s, string t) {
    int i = 0, j = 0;
    while (i < s.size() && j < t.size()) {
        if (s[i] == t[j]) {
            i++;
            j++;
        } else {
            i = i - j + 1;
            j = 0;
        }
    }
    if (j == t.size()) return i - j;
    else return -1;
}

int main() {
    string s = "mississippi", t = "issip";
    cout << Index(s, t);
    return 0;
}