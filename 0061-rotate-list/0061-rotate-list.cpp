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
    void rotateByone(ListNode* &head){
        ListNode* temp=head;
        if (head == NULL || head->next == NULL) {
             return;
        }
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next->next=head;
        head=temp->next;
        temp->next=NULL;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        int n=0;
        ListNode* curr=head;
        if (head == NULL || head->next == NULL) {
             return head;
        }
        while(curr!=NULL){
            n++;
            curr=curr->next;
        }

        k=k%n;
        if(k==0){
            return head;
        }
        while(k>0){
           rotateByone(head);
           k--; 
        }
        return head;

    }
};