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
    public ListNode deleteMiddle(ListNode head) {
        int n =0;
        
        ListNode t=head;
        while(t!=null){
            n++;
            t=t.next;
        }
        if(n==0|| n==1){
          return null;
        }
        int c=(n/2)+1;
        t=head;
        ListNode prev=head;
        while(c>1){
           prev=t;
           t=t.next;
           c--;
        }
        prev.next=t.next;
        return head;
    }
}