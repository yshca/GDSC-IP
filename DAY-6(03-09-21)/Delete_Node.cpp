class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *nxt = node->next;
        *node=*nxt;
    }
};