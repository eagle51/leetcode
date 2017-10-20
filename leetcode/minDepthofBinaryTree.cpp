#include <iostream>
#include <algorithm>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
int minDepth(TreeNode* root) {
    if (!root) return 0;
    int left_high = minDepth(root->left);
    int right_high = minDepth(root->right);
    if (left_high == 0)
        return right_high + 1;
    if (right_high == 0)
        return left_high + 1;

    return min(left_high, right_high) + 1;
}

int main()
{
    system("pause");
    return 0;
}