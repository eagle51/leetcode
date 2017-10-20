#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//leetCode上运行速度最快的算法
int Height(TreeNode* &root) 
{
    if (!root) return 0;

    int left_Height = Height(root->left);
    if (left_Height == -1) return -1;
    int right_Height = Height(root->right);
    if (right_Height == -1) return -1;

    if (abs(left_Height - right_Height) > 1)
        return -1;
    return 1 + max(left_Height,right_Height);
}
bool isBalanced(TreeNode* root) 
{
    return Height(root) != -1;
}

//我的算法,有些笨拙
int depth(TreeNode *root)
{
    if (!root) return 0;
    return 1 + max(depth(root->left), depth(root->right));
}
bool isBalanced(TreeNode* root) {
    if (!root) return true;
    stack<TreeNode*> s;
    s.push(root);
    while (!s.empty()) {
        TreeNode * x = s.top();
        if (abs(depth(x->left) - depth(x->right)) > 1)
            return false;
        s.pop();
        if (x->right) s.push(x->right);
        if (x->left) s.push(x->left);
    }
    return true;
}