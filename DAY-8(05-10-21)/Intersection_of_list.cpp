class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode * ,int> mp;
        while(headA){
            mp[headA]++;
            headA=headA->next;
        }
        while(headB){
            if(mp[headB]==0){
                 mp[headB]++;
                 headB=headB->next;
            }else
                return headB;
        }
        return headA;
    }
};
