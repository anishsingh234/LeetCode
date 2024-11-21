/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *hare=head;
        ListNode *toto=head;

        while(hare != NULL && hare->next!=NULL){
            hare=hare->next->next;
            toto=toto->next;
            if(hare==toto){
                return true;
            }
        }
        return false;
    }
};