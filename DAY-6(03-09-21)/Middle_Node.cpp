class Solution {
public:
    ListNode* middleNode(ListNode* head) {
       ListNode *temp=head;
        int s=0;
        while(temp){
            s++;
            temp=temp->next;
        }
        s=s/2;
        temp=head;
        while(s--){
            temp=temp->next;
        }
        return temp;
    }
};