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
    int pre;
    int res;
    void helper(TreeNode *root){
        if(!root)return;
        helper(root->left);
        if(pre != -1){
            res = min(res , abs(root->val-pre ));
        }
        pre = root->val;
        helper(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
       res = INT_MAX;
       pre = -1;
       helper(root);
        return res;
    }
};