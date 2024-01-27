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

    int height(TreeNode *root){
        if (!root){
            return 0;
        }
        int lh = height(root->left);
        int rh = height(root->right);

        return 1 + max(lh, rh); 

    }

    bool isBalanced(TreeNode* root) {
        if (!root){
            return true;
        }
        if (!isBalanced(root->left) || !isBalanced(root->rihgt)){
            return false;
        }
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        if (abs(leftHeight - rightHeight) <= 1){
            return true;
        }
        else {
            return false;
        }
    }
};