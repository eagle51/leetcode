#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//leetCode上运行最快的算法
TreeNode* bstInsert(TreeNode *r, int val)
{
    if (!r)
    {
        return new TreeNode(val);
    }

    if (val < r->val)
    {
        r->left = bstInsert(r->left, val);
    }
    else
    {
        r->right = bstInsert(r->right, val);
    }

    return r;
}

TreeNode* sortedArrayToBSTHelper(TreeNode* n, vector<int>& nums, int l, int r)
{
    if (l > r) return n;

    int mid = (l + r + 1) / 2;

    n = bstInsert(n, nums[mid]);
    n = sortedArrayToBSTHelper(n, nums, l, mid - 1);
    return sortedArrayToBSTHelper(n, nums, mid + 1, r);
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
    int sz = nums.size();
    TreeNode* pNode = NULL;

    if (0 == sz) return NULL;

    pNode = sortedArrayToBSTHelper(pNode, nums, 0, sz - 1);

    return pNode;
}

//算法
TreeNode *buildTree(vector<int>&a, int low,int high)
{
    if (low > high)
        return NULL;
    int mid = (low + high) >> 1;
    TreeNode *cur = new TreeNode(a[mid]);
    cur->left = buildTree(a, low, mid - 1);
    cur->right = buildTree(a, mid + 1,high);
    return cur;
}
TreeNode* sortedArrayToBST(vector<int>& nums) 
{
    return buildTree(nums, 0, nums.size() - 1);
}
int main()
{
    system("pause");
    return 0;
}