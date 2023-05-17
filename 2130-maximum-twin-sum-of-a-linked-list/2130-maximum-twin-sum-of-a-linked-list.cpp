/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int>ans;
        ListNode *curr =head;
        while(curr){
            ans.push_back(curr->val);
            curr= curr -> next;    
        }
        int i = 0 , j = ans.size() - 1 ;
        int maxSum = 0 ;
        while( i<j ){
            maxSum = max(maxSum , ans[i] + ans[j]);
            i++;
            j-- ;
        }
        return maxSum ;
        
    }
};