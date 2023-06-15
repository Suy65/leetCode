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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int MaxSum =INT_MIN;
        int level =0;
        int ans =0;
        while(!q.empty()){
            level++;
            int s =q.size();
            int sum =0;
            for( int i =0;i<s;i++){
                TreeNode *temp =q.front();
                q.pop();
                sum += temp->val;
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
                
            }
            if(MaxSum < sum){
                MaxSum = sum;
                ans =level;
            }
        }
        return ans;
    }
};