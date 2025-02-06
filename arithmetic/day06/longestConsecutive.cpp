#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums) {
    int l = 0;
    unordered_set<int> numSet(nums.begin(), nums.end());
    for (int num : numSet) {
        if (!numSet.count(num - 1)) {
            int st = num, cnt = 1;
            while (numSet.count(st + 1)) {
                st++;
                cnt++;
            }
            l = max(l, cnt);
        }
    }
    return l;
}

int main() {
    vector<int> nums = {100,4,200,1,3,2};
    cout << longestConsecutive(nums);
    return 0;
}
