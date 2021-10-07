class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head)return NULL;
        ListNode *fast=head , *slow=head;
        do{
            slow=slow->next;
           if(fast->next!=nullptr) 
               fast=fast->next->next;
            else 
                fast=fast->next;
        }while(fast!=nullptr && fast!=slow);
        
            if(fast==nullptr ||slow==nullptr)
                return NULL;
        fast=head;
        while(fast!=slow){
            fast=fast->next;
            slow=slow->next;
        }
        return fast;
    }
};