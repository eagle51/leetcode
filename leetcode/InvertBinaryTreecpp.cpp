#include <iostream>

using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
TreeNode* invertTree(TreeNode* root)
{
    if (!root)
        return NULL;
    if (root->left == NULL && root->right == NULL)
        return root;
    invertTree(root->left);
    invertTree(root->right);
    TreeNode *temp = root->left;
    root->left = root->right;
    root->right = temp;

    return root;
}