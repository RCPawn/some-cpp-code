#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int pre = 0, ans = nums[0];
    for (int num: nums) {
        pre = max(num, num + pre);
        ans = max(ans, pre);
    }
    return ans;
}

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(nums);
    return 0;
}