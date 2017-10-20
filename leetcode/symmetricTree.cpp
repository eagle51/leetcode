#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
//µÝ¹éÊÇÉñ
bool isMirrorTree(TreeNode* p, TreeNode* q)
{
    if (!p && !q)
        return true;
    else if (!p || !q)
        return false;
    if (p->val == q->val)
        return isMirrorTree(p->left, q->right) && isMirrorTree(p->right, q->left);
    else
        return false;
}

bool isSymmetric(TreeNode* root)
{
    if (!root) return false;
    return isMirrorTree(root->left, root->right);
}
int main()
{
    system("pause");
    return 0;
}