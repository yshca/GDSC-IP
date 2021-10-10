int Solution::lPalin(ListNode* a)
{  
    int n=0,mid,i=0;
    ListNode *temp=a,*prev=NULL,*frwd=NULL;
    while(temp)
    {
        temp=temp->next;
        n++;
    }
    mid=n/2;
    temp=a;
    while(i<mid)
    {
        frwd=temp->next;
        temp->next=prev;
        prev=temp;
        temp=frwd;
        i++;
    }
    if(n%2)temp=temp->next;
    while(temp&&prev)
    {
        if(temp->val!=prev->val)return 0;
        temp=temp->next;
        prev=prev->next;
    }
    return 1;
}


