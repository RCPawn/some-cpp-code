#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int len){
    for (int i = 0; i < len; ++i) {
        cout << arr[i] << " ";
    }
}

int main() {

    int a[] = {1, 2, 3, 4, 5};

    printArr(a, size(a));

    return 0;
}
