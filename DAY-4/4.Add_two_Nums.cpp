class Solution {
public:
       ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        while(head != nullptr){
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* temp = ans;
        int rem = 0;
        l1 = reverse(l1);
        l2 = reverse(l2);
        while(l1 != nullptr || l2 != nullptr || rem == 1){
            int sum = 0;
            if(l1 != nullptr){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != nullptr){
                sum += l2->val;
                l2 = l2->next;
            }
            sum += rem;
            rem = sum / 10;
            ListNode* node = new ListNode(sum%10);
            temp->next = node;
            temp = temp->next;
        }
        return reverse(ans->next);
    }
};