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
    int Length(ListNode* head){
        ListNode* curr=head;
        int n=0;
        while(curr->next!=NULL){
            curr=curr->next;
            n++;
        }
        return n;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int A=Length(headA);
        int B=Length(headB);

        while(A>B){
            headA=headA->next;
            A--;
        }
        while(B>A){
            headB=headB->next;
            B--;
        }
        while(headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }
        if(headA==headB){
            return headA;
        }
        return NULL;
    }
};