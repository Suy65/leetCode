/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
      unordered_set<ListNode*>mp;
        ListNode * node = head;
        while(node!= NULL){
            if(mp.find(node) != mp.end()){
                return node ;
            }
            else{
                mp.insert(node);
                node =node ->next ;
            }
        }
        return nullptr;
     }
};