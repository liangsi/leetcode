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
    bool hasCycle(ListNode *head) {
        ListNode *h = new ListNode(0);//fake head
        h->next = head;
        ListNode *p = h, *q = h;
        while(q!=NULL){
            p = p->next;// p move 1 each step
            q = q->next;
            if(q){
                q = q->next;// q move 2 each step
            }
            else{
                return false;
            }
            if( p == q ){// if they meet, there must be a circle
                return true;
            }
        }
        return false;
    }
};