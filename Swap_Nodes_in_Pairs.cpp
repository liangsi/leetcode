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
    ListNode *swapPairs(ListNode *head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode *h = new ListNode(0);
        h->next = head;
        ListNode *pre = head->next, *cur = head, *post = h;
        while( pre ){
            post->next = pre;
            cur->next = pre->next;
            pre->next = cur;
            post = cur;
            cur = cur->next;
            if(cur==NULL){
                break;
            }
            pre = cur->next;
        }
        return h->next;
    }
};