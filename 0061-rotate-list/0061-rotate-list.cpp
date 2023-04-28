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
    ListNode* rotateRight(ListNode* head, int k) {
        if( head == NULL || head -> next == NULL || k == 0) return head;
        ListNode *prev, *temp = head ;
        int count = 1;
        while(temp -> next != NULL){
            count++;
            temp = temp -> next;
        }
        temp = head;
        
        k = k%count;
         for(int i=0 ;i < k ; i++){
            prev = NULL;
            temp = head;
            while(temp -> next !=NULL){
                prev = temp;
                temp = temp -> next;
            }
            prev -> next = NULL;
            temp -> next = head;
            head = temp;
            
        }
        return head;
    }
};