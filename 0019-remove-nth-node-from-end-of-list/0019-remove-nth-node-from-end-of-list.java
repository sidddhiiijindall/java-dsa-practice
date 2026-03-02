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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        int c =0;
        ListNode t = head,prev=head;
        while(t!=null){
            c++;
            t=t.next;
        }
        if(c==0 || n==1 && c==1){return null;}
        if(n==c){head=head.next; 
        return head;}
        int f =c-n;
        t=head;
        for(int i =0;i<f;i++){
            prev=t;
            t=t.next;
        }
    prev.next=t.next;
    return head;
    }
}