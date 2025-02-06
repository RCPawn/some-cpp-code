#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {3, 4, 2, 1, 5};
    
    sort(arr, arr + size(arr)); //升序

//    sort(arr, arr + size(arr), greater<int>()); 降序

    for (int i = 0; i < size(arr); ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}

