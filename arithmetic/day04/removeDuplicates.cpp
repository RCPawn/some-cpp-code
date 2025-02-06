#include<bits/stdc++.h>
using namespace std;

int work(vector<int> &nums, int k) {
    int l = 0;
    for (auto num: nums) {
        if (l < k || nums[l - k] != num)
            nums[l++] = num;
    }
    return l;
}

int removeDuplicates(vector<int> &nums) {
    return work(nums, 2);
}

int main() {
    vector<int> nums = {1, 2, 3, 3, 3};
    cout << removeDuplicates(nums);
    return 0;
}
