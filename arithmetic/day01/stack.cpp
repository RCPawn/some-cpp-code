#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, op, x;
    stack<int> s;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> op;
        if (op == 1) {
            cin >> x;
            s.push(x);
        } else {
            if (!s.empty()) {
                cout << s.top() << endl;
                s.pop();
            } else {
                cout << "empty" << endl;
            }
        }
    }

    return 0;
}
