/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = (l1->val + l2->val)/10;
        ListNode* head = new ListNode((l1->val + l2->val)%10);
        ListNode* temp = head;
        l1 = l1->next;
        l2 = l2->next;
        while (l1 or l2 or carry){
            int num = carry;
            if (l1){
                num += l1->val;
                l1 = l1->next;
            }
            if (l2){
                num += l2->val;
                l2 = l2->next;
            }
            temp->next = new ListNode(num%10);
            temp = temp->next;
            carry = num/10;
        }
        return head;
    }
};

