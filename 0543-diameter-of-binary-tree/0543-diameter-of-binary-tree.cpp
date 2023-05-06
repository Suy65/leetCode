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
    int height (TreeNode * root ,int &path){
        if(root == NULL)return 0;
        int lh = height(root->left,path);
        int rh = height(root->right,path);
        path = max(path,lh+rh);
        return  max(lh,rh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int path = 0;
        height(root,path);
        return path ;
        
    }
};