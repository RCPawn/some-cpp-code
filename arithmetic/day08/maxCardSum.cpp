#include<bits/stdc++.h>
using namespace std;

int (vector<int> &cards, int cnt) {
    sort(cards.begin(), cards.end());

    int tmp = 0, odd = -1, even = -1;
    int end = cards.size() - cnt;
    for (int i = cards.size() - 1; i >= end; i--) {
        tmp += cards[i];
        if (cards[i] & 1) {
            //最大的奇数
            odd = cards[i];
        } else {
            //最大的偶数
            even = cards[i];
        }
    }

    if (!(tmp & 1)) return tmp;

    int ans = 0;
    for (int i = end - 1; i >= 0; i--) {
        if (cards[i] & 1) {
            if (even != -1)
                ans = max(ans, tmp - even + cards[i]);
        } else {
            ans = max(ans, tmp - odd + cards[i]);
        }
    }
    return ans;
}

int main() {
    int cnt = 3;
    vector<int> cards = {1, 2, 8, 9};
    cout << maxCardSum(cards, cnt);
    return 0;
}
