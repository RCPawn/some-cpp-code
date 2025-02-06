#include<bits/stdc++.h>
using namespace std;

int jump(vector<int>& nums) {
    int pos = 0, end = 0, step = 0;
    for (int i = 0; i < nums.size() - 1; i++) {
        pos = max(pos, nums[i] + i);
        if (i == end) {
            end = pos;
            step++;
        }
    }
    return step;
}

int main() {
    vector<int> nums = {2,3,1,1,4};
    cout << jump(nums);
    return 0;
}

/*
nums: 2 3 1 1 4
   i: 0 1 2 3 4

   i  pos  end   step

   0   2    0     1
   1   4    2     1
   2   4    4     2
   3   4    4     2
*/