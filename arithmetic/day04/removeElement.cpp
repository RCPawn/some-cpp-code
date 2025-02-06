#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int l = 0;
    for (int r = 0; r < nums.size(); ++r) {
        if (nums[r] != val) nums[l++] = nums[r];
     }
    return l;
}

int main() {
    vector<int> nums = {3,2,2,3};
    cout << removeElement(nums, 2);
    return 0;
}
