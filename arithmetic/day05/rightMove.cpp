#include<bits/stdc++.h>
using namespace std;

void rightMove(char arr[], int n){
    int l = strlen(arr);
    n = n % l;
    if (n == 0) return;
    reverse(arr, arr + l);
    reverse(arr, arr + n);
    reverse(arr + n, arr + l);
}

int main() {
    char arr[] = {'H','e','l','l','o','W','o','r','l','d'};
    rightMove(arr, 3);
    for (char c: arr) {
        cout << c;
    }
    return 0;
}
