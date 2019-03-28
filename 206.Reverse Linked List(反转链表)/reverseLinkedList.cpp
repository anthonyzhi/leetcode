//反转一个单链表


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
        ListNode* p=head;
        if(p==NULL||p->next==NULL)
            return p;
        ListNode *q,*r;
        q=p->next;
        p->next=NULL;
        while(q!=NULL){
            r=q->next;
            q->next=p;
            p=q;
            q=r;
        }
        return p;
    }
};
