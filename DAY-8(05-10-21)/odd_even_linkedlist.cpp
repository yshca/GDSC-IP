class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
       if (head)
    {
        struct ListNode* odd = head, * even = head->next, * even_head = head->next;
        while (even && even->next)
        {
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = odd->next;
            even= even->next;
        }
        odd->next = even_head;// chaining even_list to end of odd_list
    }
    return head;
    }
};
