class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
         int len=0;
        ListNode * temp=head;
        while(temp){
            temp=temp->next;
            len++;
        }
         if(head==NULL)
        {
            return head;
        }
        k= k%len;
       
        if(k==0)
        {
            return head;
        }
        temp=head;
        int count=1;
        ListNode* temp1= head;
        ListNode* prev=NULL;
        while(temp->next)
        {
            if(count>=k)
            {
                prev=temp1;
               temp1= temp1->next; 
            }
            count++;   
            temp=temp->next;
        }
        temp->next= head;
        prev->next=NULL;
        return temp1;
    }
};