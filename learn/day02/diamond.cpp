#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "input n: ";
    cin >> n;

    /*for (int i = 0; i < n / 2 + 1; ++i) {
        for (int j = n / 2; j > i; --j)
            cout << " ";
        for (int j = 0; j < 2 * i + 1; ++j)
            cout << "*";
        cout << endl;
    }
    for (int i = 0; i < n / 2; ++i) {
        for (int j = 0; j <= i; ++j)
            cout << " ";
        for (int j = n - 1; j > i * 2 + 1; --j)
            cout << "*";
        cout << endl;
    }*/

    /*for (int i = 0; i < n / 2 + 1; ++i) {
        string s;
        s += string(n / 2 - i, ' ');
        s += string(2 * i + 1, '*');
        cout << s << endl;
    }

    for (int i = 1; i <= n / 2; ++i) {
        string s;
        s += string(i, ' ');
        s += string(n - 2 * i, '*');
        cout << s << endl;
    }*/

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < abs(n / 2 - i); ++j)
            cout << " ";
        for (int j = 0; j < n - 2 * abs(n / 2 - i); ++j)
            cout << "*";
        cout << endl;
    }
    
    return 0;
}
