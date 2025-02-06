#include <bits/stdc++.h>
using namespace std;

int main() {

    int a = 10;

    int *p;

    p = &a;

    cout << &a << endl; //0x2e4d9ffd64
    cout << p << endl; //0x2e4d9ffd64
    cout << *p << endl; //10

    return 0;
}
