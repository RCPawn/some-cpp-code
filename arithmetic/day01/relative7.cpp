#include <bits/stdc++.h>
using namespace std;

int relative7(int n){
    if (n < 7) return 0;
    if (n % 7 == 0) return 1;
    while (n >= 7) {
        int ge = n % 10;
        n /= 10;
        if (ge == 7) return 1;
    }
    return 0;
}

int main() {
    int n;
    while (cin >> n) {
        if (relative7(n)) {
            cout << "相关" << endl;
        } else {
            cout << "无关" << endl;
        }
    }
    return 0;
}
