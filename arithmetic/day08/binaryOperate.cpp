#include<bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//翻转二叉树
TreeNode *mirrorTree1(TreeNode *root) {
    if(root == nullptr) return nullptr;
    queue<TreeNode *> qu;
    qu.push(root);
    while (!qu.empty()) {
        TreeNode *node = qu.front();
        qu.pop();
        if (node->left) qu.push(node->left);
        if (node->right) qu.push(node->right);
        TreeNode *temp = node->left;
        node->left = node->right;
        node->right = temp;
    }
    return root;
}
//2.迭代
TreeNode *mirrorTree2(TreeNode *root) {
    if (!root) return nullptr;
    TreeNode *temp = root->left;
    root->left = mirrorTree2(root->right);
    root->right = mirrorTree2(temp);
    return root;
}

//判断二叉树是否对称
//1.递归
bool check1(TreeNode *p, TreeNode *q) {
    if (!p && !q) return true;
    if (!p || !q) return false;
    if (p->val != q->val) return false;
    return check1(p->left, q->right) &&
           check1(p->right, q->left);
}

//2.迭代
bool check2(TreeNode *p, TreeNode *q) {
    queue<TreeNode *> qu;
    qu.push(p);
    qu.push(q);
    while (!qu.empty()) {
        p = qu.front();
        qu.pop();
        q = qu.front();
        qu.pop();
        if (!p && !q) continue;
        if (!p || !q) return false;
        if (p->val != q->val) return false;
        qu.push(p->left);
        qu.push(q->right);
        qu.push(p->right);
        qu.push(q->left);
    }
    return true;
}

bool checkSymmetricTree(TreeNode *root) {
    if (!root) return true;
    return check1(root->left, root->right);
}

int main() {
    return 0;
}
