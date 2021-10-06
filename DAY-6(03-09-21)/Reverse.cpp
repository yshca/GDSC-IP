class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *cur=head,*prev=NULL,*frwd;
        while(cur)
        {
            frwd=cur->next;
            cur->next=prev;
            prev=cur;
            cur=frwd;
        }
        return prev;
    }
};