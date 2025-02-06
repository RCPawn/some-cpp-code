#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, op, x;
    queue<int> q;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> op;
        if (op == 1) {
            cin >> x;
            q.push(x);
        } else {
            if (!q.empty()) {
                cout << q.front() << endl;
                q.pop();
            } else {
                cout << "empty" << endl;
            }
        }
    }

    return 0;
}
