#include<bits/stdc++.h>
using namespace std;

// 时间复杂度O(n²)
/*vector<int> productExceptSelf(vector<int> &nums) {
    int n = nums.size();
    vector<int> ans(n);
    for (int i = 0; i < n; ++i) {
        int temp = 1;
        for (int j = 0; j < n; ++j) {
            if (i != j)
                temp *= nums[j];
        }
        ans[i] = temp;
    }
    return ans;
}*/

//时间复杂度O(n)
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> l(n), ans(n);

    l[0] = 1;
    for (int i = 1; i < n; ++i) {
        l[i] = l[i - 1] * nums[i - 1];
    }

    int r = 1;
    for (int i = n - 1; i >= 0; --i) {
        ans[i] = l[i] * r;
        r *= nums[i];
    }
    return ans;
}

int main() {
    vector<int> nums = {1,2,3,4};
    vector<int> ans = productExceptSelf(nums);
    for (int val: ans) {
        cout << val << " ";
    }
    return 0;
}
