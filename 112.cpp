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
    bool result(TreeNode *root, int x, int y){
         if (!root->left && !root->right){ // leaf node condition..
            if (x == y + root->val){ // condition check.. y + root->val for last node.becauge when i enter in this section then i return thats mean we can't go in left or right child and  this root val we can't add in y..thats why i add in this conditon..
                return true;
            }
            return false;
        }
        if (root->left){
            if (result(root->left, x, root->val + y)){ // travel node and make sum.
                return true;
            }
        }
        if (root->right){
            if (result(root->right, x, root->val + y)){// travel node and make sum.
                return true;
            }
        }
        return false;
    }
    bool hasPathSum(TreeNode* root, int targetSum){
        if (!root){
            return false;
        }
        return result(root, targetSum, 0);
    }
};