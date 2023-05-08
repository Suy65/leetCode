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
    void findInorder(TreeNode* curr ,vector<int>&inorder){
        while(curr != NULL){
            if(curr->left  == NULL){
                inorder.push_back(curr->val);
                curr = curr->right;
            }else{
                TreeNode* prev =curr->left;
                while(prev->right && prev->right !=curr){
                    prev =prev->right;
                }
                if(prev->right == NULL){
                    prev->right =curr;
                    curr= curr->left;
                }
                else{
                    prev->right =NULL;
                    inorder.push_back(curr->val);
                    curr =curr ->right;
                    
                }
            }
        }
    
    }
    bool findTarget(TreeNode* root, int k) {
        vector <int> inorder ;
        findInorder(root , inorder);
        int n=inorder.size();
       // for( int i=0;i<n-1;i++){
       //     for( int j=i;j<n;j++){
       //         if(inorder[i] +inorder[j] == k)
       //             return true;
       //     }
       // }
       // return false;
        int i = 0;
        int j = inorder.size() - 1;
        while(i < j){
            if(inorder[i] + inorder[j] == k)
                return true;
            else if(inorder[i] + inorder[j] > k)
                j--;
            else
                i++;
        }
        return false;
    }
};