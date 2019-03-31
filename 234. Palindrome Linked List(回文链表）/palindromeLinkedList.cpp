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
