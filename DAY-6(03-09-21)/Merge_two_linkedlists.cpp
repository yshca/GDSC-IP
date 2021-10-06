class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==nullptr)return l2;
        if(l2==nullptr)return l1;
        ListNode *ans= new ListNode();
        ListNode *temp1=l1, *temp2=l2;
        ListNode *temp3=ans;
        while(temp1 and temp2){
            if((temp1->val)>=(temp2->val)){
                temp3->next=temp2;
                temp3=temp3->next;
                temp2=temp2->next;
            }else{
                temp3->next=temp1;
                temp3=temp3->next;
                temp1=temp1->next;
            }
        }
        if(temp1){
            while(temp1){
                temp3->next=temp1;
                temp3=temp3->next;
                temp1=temp1->next;
            }
        }else{
            while(temp2){
                temp3->next=temp2;
                temp2=temp2->next;
                temp3=temp3->next;
            }
        }
        return ans->next;
    }
};