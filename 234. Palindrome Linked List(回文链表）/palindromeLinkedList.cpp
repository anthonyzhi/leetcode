/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
bool isEqual(ListNode* head,ListNode *&h){
    bool result;
    if(head->next==NULL)
        return head->val==h->val;
    else{
        result=isEqual(head->next,h);
        h=h->next;
    }
    return (result && head->val==h->val);
}
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* h=head;
        if(head==NULL)
            return true;
        return isEqual(head,h);
    }
};




//方法二


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head, *fast=head,*prev=nullptr;
        //使用快慢指针找到链表中点
        while(fast){
            slow=slow->next;
            fast=fast->next?fast->next->next:fast->next;            
        }
        //reverse逆序后半部分
        while(slow){
            ListNode* ovn=slow->next;
            slow->next=prev;
            prev=slow;
            slow=ovn;
        }
        //从头、中点开始比较是否相同
        while(head&&prev){
            if(head->val!=prev->val)
                return false;
            head=head->next;
            prev=prev->next;
        }
        return true;
    }
};
