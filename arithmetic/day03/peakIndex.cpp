#include<bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int peak = arr[0], index = -1;
    for (int i = 0; i < arr.size(); ++i) {
        peak = max(peak, arr[i]);
        if (arr[i] == peak) index = i;
    }
    return index;
}

int main() {
    vector<int> arr = {1,2,5,3,0};

    int ans = peakIndexInMountainArray(arr);
    cout << ans;
    
    return 0;
}
