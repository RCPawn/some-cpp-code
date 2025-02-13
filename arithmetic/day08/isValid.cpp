#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            st.push(s[i]);
        } else {
            if (st.empty()) return false;
            char c = st.top();
            if (s[i] == ')' && c != '(') return false;
            if (s[i] == ']' && c != '[') return false;
            if (s[i] == '}' && c != '{') return false;
            st.pop();
        }
    }
    return st.empty();
}

int main(){
    string s = "()[]{}";
    cout << isValid(s);
    return 0;
}