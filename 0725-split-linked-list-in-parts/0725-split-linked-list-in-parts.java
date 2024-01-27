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
    public ListNode[] splitListToParts(ListNode head, int k) {
        int length = 0;
        ListNode current = head;
        while (current != null) {
            length++;
            current = current.next;
        }
        int initialSize = length / k;
        int extraSizeCount = length % k;
        ListNode[] result = new ListNode[k];
        current = head;
        for (int i = 0; i < k; i++) {
            result[i] = current; 
            int partSize = initialSize + (i < extraSizeCount ? 1 : 0);
            for (int j = 0; j < partSize - 1 && current != null; j++) {
                current = current.next;
            }
            if (current != null) {
                ListNode temp = current.next;
                current.next = null;
                current = temp;
            }
        }
        return result;
    }
}