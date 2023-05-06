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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root == NULL)return res;
        queue<TreeNode*>q;
        q.push(root);
        bool leftToright =true;
       
        while(!q.empty()){
           
            int siz = q.size();
             vector<int>row(siz);
            for( int i=0; i<siz ;i++){
                TreeNode *temp =q.front();
                q.pop();
                int index = (leftToright) ? i : (siz-1-i);
                row[index]= temp->val;
                if(temp->left)q.push({temp->left});
                if(temp->right)q.push({temp->right});
            }
               leftToright = !leftToright;
               res.push_back(row);
            
        }
        return res;
    }
};