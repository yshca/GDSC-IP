class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head,*prev=temp,*str=head;
        while(n--&&temp)
        {
            temp=temp->next;
        }
        while(temp){
            prev=str;
            str=str->next;
            temp=temp->next;
        }
            prev->next=str->next;
        if(str==head)return str->next;
        return head;
    }
};