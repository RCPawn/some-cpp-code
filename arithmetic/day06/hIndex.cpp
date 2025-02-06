#include<bits/stdc++.h>
using namespace std;

int hIndex(vector<int> &nums) {
    int h = 0, n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = n - 1; i >= 0; --i) {
        if (nums[i] > h) {
            h++;
        } else break;
    }
    return h;
}

int main() {
    vector<int> nums = {3,0,6,1,5};
    cout << hIndex(nums);
    return 0;
}
