/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        if (head == null || head.next == null || k == 0) {
            return head;
        }
        int length = 1;
        ListNode current = head;
        while (current.next != null) {
            current = current.next;
            length++;
        }
        int newHeadPosition = length - k % length;
        if (newHeadPosition == length) {
            return head;
        }
        current.next = head; // Make the list circular
        current = head;
        for (int i = 0; i < newHeadPosition - 1; i++) {
            current = current.next;
        }
        head = current.next;
        current.next = null;
        return head;
    }
}