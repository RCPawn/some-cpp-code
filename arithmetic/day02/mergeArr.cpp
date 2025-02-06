#include<bits/stdc++.h>
using namespace std;

int getLen(vector<int> list) {
    int len = 0;
    for (int i = 0; i < list.size(); ++i) {
        if (list[i] != 0) len++;
    }
    return len;
}

int main() {
    vector<int> a = {1, 2, 3, 0, 0, 0};
    vector<int> b = {2, 5, 6};
    int m = getLen(a);
    int n = getLen(b);

    for (int i = 0; i < n; ++i) {
        a[m + i] = b[i];
    }

    sort(a.begin(), a.end());

    for (const auto &item: a) {
        cout << item << " ";
    }

    return 0;
}
