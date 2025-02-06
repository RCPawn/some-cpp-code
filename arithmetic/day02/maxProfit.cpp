//方法一（超时）：

/*#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int ans = 0;
    int n = prices.size();

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            ans = max(ans, prices[j] - prices[i]);
        }
    }

    cout << ans;

    return 0;
}*/

//方法二：

#include<bits/stdc++.h>
using namespace std;

int maxProfit1(vector<int>& prices) {
    int ans = 0, minPrice = prices[0];

    for (int price : prices) {
        ans = max(ans, price - minPrice);
        minPrice = min(price, minPrice);
    }

    return ans;
}

int maxProfit2(vector<int>& prices) {
    int ans = 0;
    for (int i = 1; i < prices.size(); ++i)
        ans += max(0, prices[i] - prices[i - 1]);
    return ans;
}

int main() {
    vector<int> prices = {7,1,5,3,6,4};
    cout << maxProfit1(prices);
    return 0;
}

