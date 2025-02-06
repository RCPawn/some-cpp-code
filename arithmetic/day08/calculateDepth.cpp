#include<bits/stdc++.h>

using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

/*int calculateDepth(TreeNode *root) {
    if (!root) return 0;
    int lh = calculateDepth(root->left);
    int rh = calculateDepth(root->right);
    return max(lh, rh) + 1;
}*/

int calculateDepth(TreeNode *root) {
    if (!root) return 0;
    queue<TreeNode *> qu;
    qu.push(root);
    int h = 0;
    while (!qu.empty()) {
        int curSize = qu.size();
        for (int i = 0; i < curSize; ++i) {
            TreeNode *node = qu.front();
            qu.pop();
            if (node->left) qu.push(node->left);
            if (node->right) qu.push(node->right);
        }
        h++;
    }
    return h;
}

int main() {
    return 0;
}