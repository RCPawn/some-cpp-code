#include<bits/stdc++.h>
using namespace std;

//反转
/*bool isPalindrome(string s) {
    string s1 = "", s2 = "";
    for (char val: s) {
        //判断是否为字母或数字
        if (isalnum(val)) {
            s1 += tolower(val);
            s2 += tolower(val);
        }
    }
    reverse(s1.begin(), s1.end());
    return s1 == s2;
}*/

//双指针
bool isPalindrome(string s) {
    string s1 = "";
    for (char val: s) {
        if (isalnum(val))
            s1 += tolower(val);
    }
    int l = 0, r = s1.size() - 1;
    while (l < r) {
        if (s1[l] != s1[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s);
    return 0;
}
