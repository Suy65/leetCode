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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>v;
        ListNode* temp=head;
        while(temp){
            int i=temp->val;
            v.push_back(i);
            temp=temp->next;
        }
        swap(v[k-1], v[v.size()-k]);
        temp=head;
        for(auto &b: v){
            temp->val=b;
            temp=temp->next;
        }
        return head;
    }
};