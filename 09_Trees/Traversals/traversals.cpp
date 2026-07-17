#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void inorderRecursive(TreeNode* root, vector<int>& res) {
    if (!root) return;
    inorderRecursive(root->left, res);
    res.push_back(root->val);
    inorderRecursive(root->right, res);
}

void preorderRecursive(TreeNode* root, vector<int>& res) {
    if (!root) return;
    res.push_back(root->val);
    preorderRecursive(root->left, res);
    preorderRecursive(root->right, res);
}

void postorderRecursive(TreeNode* root, vector<int>& res) {
    if (!root) return;
    postorderRecursive(root->left, res);
    postorderRecursive(root->right, res);
    res.push_back(root->val);
}
