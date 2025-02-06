#include <bits/stdc++.h>
using namespace std;

int convert(string s) {
    if (s == "0" || s == "零" || s == "zero") return 0;
    if (s == "1" || s == "一" || s == "one") return 1;
    if (s == "2" || s == "二" || s == "two") return 2;
    if (s == "3" || s == "三" || s == "three") return 3;
    if (s == "4" || s == "四" || s == "four") return 4;
    if (s == "5" || s == "五" || s == "five") return 5;
    if (s == "6" || s == "六" || s == "six") return 6;
    if (s == "7" || s == "七" || s == "seven") return 7;
    if (s == "8" || s == "八" || s == "eight") return 8;
    if (s == "9" || s == "九" || s == "nine") return 9;
    return -1;
}

int main() {

    string a, b;
    while (true) {
        cin >> a >> b;
        if (a == "0" && b == "0") break;

        int A = convert(a);
        int B = convert(b);

        cout << A + B << endl;
    }

    return 0;
}