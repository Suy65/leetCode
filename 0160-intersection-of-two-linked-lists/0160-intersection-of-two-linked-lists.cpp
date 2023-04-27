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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB ==NULL)return NULL;
        ListNode *d =headA;
        ListNode *b = headB;
        while(d!=b){
            d = d==NULL? headB : d->next;
            b = b==NULL? headA : b->next;
        }
        return d;
    }
};