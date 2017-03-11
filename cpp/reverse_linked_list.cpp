//  LeetCode 206. Reverse Linked List

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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* p = head;
        ListNode* q = p->next;
        p->next = NULL;
        while(q!=NULL){
            ListNode* r = q->next;
            q->next = p;
            p = q;
            q = r;
        }
        return p;
    }
};