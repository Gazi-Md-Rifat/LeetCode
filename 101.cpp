
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool find(TreeNode* p , TreeNode* q)
    {
        if (p == nullptr && q == nullptr)
        {
            return true;
        }
        if (p == nullptr || q == nullptr || p->val != q->val)
        {
            return false;
        }
        return find(p->left , q->right) && find(p->right, q->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr || (root->left == nullptr && root->right != nullptr) || (root->left != nullptr && root->right == nullptr))
        {
            return false;
        }
        if (find(root->left, root->right))
        {
            return true;
        }
        return false;
    }
};