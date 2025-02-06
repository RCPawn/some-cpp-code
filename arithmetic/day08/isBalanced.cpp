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

int height(TreeNode* root) {
    if (!root) return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh, rh) + 1;
}

bool isBalanced(TreeNode* root) {
    if (!root) return true;
    return abs(height(root->left)
    - height(root->right)) <= 1
    && isBalanced(root->left)
    && isBalanced(root->right);
}

int main() {
    return 0;
}