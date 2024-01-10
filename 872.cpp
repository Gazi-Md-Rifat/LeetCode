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
    void make_sequence(TreeNode *root, vector<int> &vec){
        if (!root){
            return;
        }
        if (root && !root->left && !root->right){
            vec.push_back(root->val);
        }
        make_sequence(root->left, vec);
        make_sequence(root->right, vec);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> sequence1;
        vector<int> sequence2;
        make_sequence(root1, sequence1);
        make_sequence(root2, sequence2);
        if (sequence1 == sequence2){
            return true;
        }
        return false;
    }
};