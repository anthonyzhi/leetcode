//给定一个链表，删除链表的倒数第 n 个节点，并且返回链表的头结点。

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        int len=0;
        ListNode *first=head;
        while(first!=NULL){
            len++;
            first=first->next;
        }
        len-=n;
        first=dummy;
        while(len>0){
            len--;
            first=first->next;
        }
        first->next=first->next->next;
        return dummy->next;
    }
};



//法二
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* first=dummy;
        ListNode* second=dummy;
        for(int i=1;i<=n+1;i++)
            first=first->next;
        while(first!=NULL){
            first=first->next;
            second=second->next;
        }
        second->next=second->next->next;
        return dummy->next;
    }
};
