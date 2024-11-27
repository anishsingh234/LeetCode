class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int dec = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            dec = dec * 2 + temp->val; // Binary to decimal conversion
            temp = temp->next;         // Move to the next node
        }

        return dec;
    }
};
