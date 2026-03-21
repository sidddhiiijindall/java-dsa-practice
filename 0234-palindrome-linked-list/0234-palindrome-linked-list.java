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
    public boolean isPalindrome(ListNode head) {
        ListNode s=head;
        ListNode f=head;
        ListNode t = head;
        while( f!=null && f.next!=null ){
            t=s;
            s=s.next;
            f=f.next.next;
        }
        t.next=null;
        ListNode p =null;
        ListNode c=s;
        ListNode fr;
        while(c!=null){
            fr=c.next;
            c.next=p;
            p=c;
            c=fr;
        }
        ListNode h=p;
        ListNode temp=head;
        while(temp!=null){
            if(temp.val != h.val){
                return false;
            }
            temp=temp.next;
            h=h.next;
        }
        return true; 
    }
}