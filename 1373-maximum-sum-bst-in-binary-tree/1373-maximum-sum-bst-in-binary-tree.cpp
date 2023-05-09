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
    class info
    {
        public:
        int maxi;
        int mini;
        int isBST;
        int sum;
        
        
    };
   
info solve(TreeNode* root ,int &maxsum){
    if(!root)
        return{INT_MIN ,INT_MAX ,true ,0 };
    info left = solve(root->left , maxsum);
    info right = solve(root->right ,maxsum);
    
    info currNode;
    
    currNode.sum  = left.sum + right.sum + root->val;
    currNode.maxi = max(root->val,right.maxi);
    currNode.mini = min(root->val ,left.mini);
    
    
    if(left.isBST  && right.isBST && (root->val  < right .mini && root->val >left.maxi) )
        currNode.isBST =true;
    else
        currNode.isBST = false;
    if(currNode.isBST)
        maxsum = max(maxsum,currNode.sum);
    
    return currNode;
    
}
int maxSumBST(TreeNode *root){
    int maxsum =0;
    info temp =solve(root ,maxsum);
    return maxsum;
}
};

