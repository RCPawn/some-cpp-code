#include<bits/stdc++.h>
using namespace std;

const pair<int, string> arr[] = {
        {1000, "M"},
        {900,  "CM"},
        {500,  "D"},
        {400,  "CD"},
        {100,  "C"},
        {90,   "XC"},
        {50,   "L"},
        {40,   "XL"},
        {10,   "X"},
        {9,    "IX"},
        {5,    "V"},
        {4,    "IV"},
        {1,    "I"},
};

string intToRoman(int num) {
    string roman;
    for (auto [key, val]: arr) {
        while (num >= key) {
            num -= key;
            roman += val;
        }
        if (num == 0) break;
    }
    return roman;
}

int main() {
    int num = 3749;
    cout << intToRoman(num);
    return 0;
}
