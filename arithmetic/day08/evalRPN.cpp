#include<bits/stdc++.h>
using namespace std;

int evalRPN(vector<string> &tokens) {
    stack<int> st;
    for (string s: tokens) {
        if (s != "+" && s != "-" && s != "*" && s != "/") {
            st.push(stoi(s));
        } else {
            int num2 = st.top();
            st.pop();
            int num1 = st.top();
            st.pop();
            if (s == "+") st.push(num1 + num2);
            if (s == "-") st.push(num1 - num2);
            if (s == "*") st.push(num1 * num2);
            if (s == "/") st.push(num1 / num2);
        }
    }
    return st.top();
}

int main() {
    vector<string> tokens = {"2", "1", "+", "3", "*"};
    cout << evalRPN(tokens);
    return 0;
}