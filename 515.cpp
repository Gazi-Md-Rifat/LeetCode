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
    vector<int> largestValues(TreeNode* root) {
        if (!root){
            return {};
        }
        deque<TreeNode*> container;
        container.push_back(root);
        container.push_back(nullptr);
        vector<int> ans;
        ans.push_back(root->val); // first level ..

        int maximum = pow(-2, 31); // set minimum -2^31..because my root can be -2^31 to 2^31-1..so find the max of that number...
        while (!container.empty()){
            TreeNode *head = container.front();
            container.pop_front();

            if (head){
                if (head->left){
                    // maximum = max(maximum, head->left->val);
                    if (maximum < head->left->val){
                        maximum = head->left->val;
                    }
                    container.push_back(head->left);
                }
                if (head->right){
                    if (maximum < head->right->val){
                        maximum = head->right->val;
                    }
                    // maximum = max(maximum, head->right->val);
                    container.push_back(head->right);
                }
            }
            else if (!container.empty()){
                ans.push_back(maximum);
                container.push_back(nullptr); // set sign for next level
                maximum = pow(-2, 31); // reset for next level..
                // level done.
            }
        }
        return ans;
    }
};