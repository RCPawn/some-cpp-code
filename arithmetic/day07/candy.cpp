#include<bits/stdc++.h>
using namespace std;

int candy(vector<int>& ratings) {
    int n = ratings.size();
    vector<int> l(n, 1);
    vector<int> r(n, 1);
    for (int i = 1; i < n; ++i) {
        if (ratings[i] > ratings[i - 1])
            l[i] = l[i - 1] + 1;
    }
    int cnt = l[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        if (ratings[i] > ratings[i + 1])
            r[i] = r[i + 1] + 1;
        cnt += max(l[i], r[i]);
    }
    return cnt;
}

int main() {
    vector<int> ratings = {1,2,2};
    cout << candy(ratings);
    return 0;
}