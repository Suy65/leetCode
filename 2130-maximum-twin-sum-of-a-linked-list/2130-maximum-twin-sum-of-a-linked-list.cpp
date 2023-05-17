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
        ListNode *curr = head ;
        stack<int>st;
        while(curr){
            st.push(curr->val);
            curr = curr->next ;
        }
        curr = head ;
        int n = st.size();
        int count  = 1 ;
        int maxSum = 0 ;
        while(count <= n/2){
            maxSum = max(maxSum , curr->val + st.top());
            st.pop();
            curr=curr->next;
            count++;
        }
        return  maxSum ;
    }
};