#include<bits/stdc++.h>
using namespace std;

/*void rotate(vector<int> &nums, int k) {
    k %= nums.size(); //处理 k > nums.size()的情况
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}*/

void rotate(vector<int> &nums, int k) {
    int n = nums.size();
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        arr[(i + k) % n] = nums[i];
    }
    nums.assign(arr.begin(), arr.end());
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    rotate(nums, 3);
    for (auto num: nums) {
        cout << num << " ";
    }
    return 0;
}

/*
   arr: 1 2 3 4 5 6 7
     i: 0 1 2 3 4 5 6
        3 4 5 6 0 1 2

newArr: 5 6 7 1 2 3 4

 k: 3   n: 7

 index: (i + k) % n

newArr[index] = arr[i]
*/
