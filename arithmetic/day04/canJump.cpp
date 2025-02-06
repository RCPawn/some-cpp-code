#include<bits/stdc++.h>
using namespace std;

/*bool canJump(vector<int>& nums){
    int index = 0, n = nums.size();
    for (int i = 0; i <= index; ++i) {
        index = max(index, nums[i] + i);
        if (index >= n - 1) return true;
    }
    return false;
}*/

bool canJump(vector<int>& nums) {
    int index = 0, n = nums.size();
    for (int i = 0; i < n - 1; i++){
        index = max(nums[i] + i, index);
        if (index == i) return false;
    }
    return true;
}

int main() {
    vector<int> nums = {2,3,1,1,4};
    cout << canJump(nums);
    return 0;
}
