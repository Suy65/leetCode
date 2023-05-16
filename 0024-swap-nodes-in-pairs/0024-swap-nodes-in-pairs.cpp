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
    ListNode* swapPairs(ListNode* head) {
        ListNode * prev = head;
        ListNode * ptr = head ;
        while( ptr && ptr -> next ){
            ListNode * tmp = ptr ->next ;
            ptr->next =ptr->next ->next ;
            tmp ->next =ptr ;
            if( prev == head ){
                head = tmp ;
            }else{
                prev -> next = tmp;
            }
            prev = ptr ;
            ptr =ptr -> next ;
        }
        return head ;
    }
};