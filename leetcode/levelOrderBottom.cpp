#include <iostream>
#include <queue>
#include <vector>

using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
//leetCode上速度最快的算法
vector<vector<int>> levelOrderBottom(TreeNode* root) {
    vector<vector<int>> res;
    if (!root) return res;
    vector<TreeNode*> temp;
    vector<TreeNode*> cur;
    vector<int> rec;
    temp.push_back(root);
    rec.push_back(root->val);
    res.push_back(rec);
    while (!temp.empty()) {
        TreeNode* item;
        rec.clear();
        for (TreeNode * it : temp) {
            if (it->left) {
                cur.push_back(it->left);
                rec.push_back(it->left->val);
            }
            if (it->right) {
                cur.push_back(it->right);
                rec.push_back(it->right->val);
            }
        }
        temp = cur;
        if (!rec.empty())
            res.push_back(rec);
        cur.clear();
    }
    reverse(res.begin(), res.end());
    return res;
}

//我的算法
vector<vector<int>> levelOrderBottom(TreeNode* root) 
{
    if (!root)
        return vector<vector<int>>();
    queue<TreeNode *> q;
    vector<vector<int>> result;
    q.push(root);
    while (!q.empty()) {
        int n = q.size();
        vector<int> temp;
        for (int i = 0;i < n;++i) {
            TreeNode *x = q.front();
            temp.push_back(x->val);
            q.pop();
            if (x->left) q.push(x->left);
            if (x->right) q.push(x->right);
        }
        result.push_back(temp);
    }
    return result;
}

int main()
{


    system("pause");
    return 0;
}