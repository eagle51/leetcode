#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
//递归方式实现
int maxDepth(TreeNode* root)
{
    if (!root)
        return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}

//非递归方式,层次遍历，记录层数
int maxDepth2(TreeNode* root)
{
    if (!root)
        return 0;
    int level = 0;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty()) {
        level++;
        int n = q.size();
        for (int i = 0;i < n;++i) {
            TreeNode *x = q.front();
            q.pop();
            if (x->left) q.push(x->left);
            if (x->right) q.push(x->right);
        }
    }
    return level;
}