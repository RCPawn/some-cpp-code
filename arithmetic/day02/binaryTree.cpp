#include <bits/stdc++.h>
using namespace std;

struct Node {
    int l;
    int r;
} tree[100010];

void order(int i) {
    if (i == 0) return;
    order(tree[i].l);
    cout << i << "\n";
    order(tree[i].r);
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> tree[i].l >> tree[i].r;
    }

    order(1);

    return 0;
}

/* 

左 根 右

3 2 4 1 5
                      1
                     / \
                    2   5
                   / \
                  3   4

*/