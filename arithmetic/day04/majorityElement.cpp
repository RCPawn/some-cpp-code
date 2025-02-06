#include<bits/stdc++.h>
using namespace std;

/*int majorityElement(vector<int> &nums) {
    unordered_map<int, int> counts;
    int ans = 0, cnt = 0;
    for (auto num: nums) {
        if (++counts[num] > cnt) {
            ans = num;
            cnt = counts[num];
        }
    }
    return ans;
}*/

int majorityElement(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    return nums[nums.size() / 2];
}

int main() {
    vector<int> nums = {2,2,2,2,1,1,1};
    cout << majorityElement(nums);
    return 0;
}
