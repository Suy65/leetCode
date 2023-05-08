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
    void inorderTraversal(TreeNode * cur , vector<int>&inorder){
        if(cur == nullptr)return;
        
        
        inorderTraversal(cur ->left ,inorder);
        inorder.push_back(cur->val);
        inorderTraversal(cur->right,inorder);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>inorder;
        inorderTraversal(root , inorder);
        return inorder[k-1];
    }
};