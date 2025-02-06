#include <bits/stdc++.h>
using namespace std;

int flower(int n){
    int ge, shi, bai;
    ge = n % 10;
    shi = n / 10 % 10;
    bai = n / 100;
    return n == pow(ge, 3) + pow(shi, 3) + pow(bai, 3);
}

int main() {

    for (int i = 100; i < 999; ++i) {
        if (flower(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
