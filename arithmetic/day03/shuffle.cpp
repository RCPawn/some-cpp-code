#include<bits/stdc++.h>
using namespace std;

//洗牌算法

/*vector<int> shuffle(vector<int> &nums, int n) {
    vector<int> ans;
    for (int i = 0; i < n; ++i) {
        ans.push_back(nums[i]);       
        ans.push_back(nums[i + n]);   
    }
    return ans;
}*/

vector<int> shuffle(vector<int> &nums, int n) {
    vector<int> ans(2 * n);
    for (int i = 0; i < n; ++i) {
        ans[2 * i] = nums[i];
        ans[2 * i + 1] = nums[i + n];
    }
    return ans;
}

int main() {
    vector<int> nums = {1, 3, 5, 7, 2, 4, 6, 8};
    vector<int> ans = shuffle(nums, size(nums) / 2);
    for (int i : ans) {
        cout << i << " ";
    }
    return 0;
}

