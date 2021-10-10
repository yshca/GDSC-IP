ListNode* Solution::swapPairs(ListNode* a) 
{
    if(a==nullptr||a->next==nullptr)return a;
    ListNode *prev=a, *strt=a, *end=a->next, *ans=a->next, *stor; int i=0; 
    while(end!=nullptr)
    {
         stor=end->next; end->next=strt;
         strt->next=stor;  if(i!=0){prev->next=end;}
         prev=strt; strt=strt->next;
        if(strt!=nullptr)end=strt->next; else end=strt; i++;
    }return ans;
}
