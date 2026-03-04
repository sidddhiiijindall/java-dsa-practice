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
    public ListNode sortList(ListNode head) {
       return sort(head);
    }
    public ListNode sort(ListNode head){
        if(head == null || head.next ==null){
            return head;
        }
        ListNode s=head;
        ListNode f=head.next;
        while(f!=null && f.next !=null){
            s=s.next;
            f=f.next.next;
        }
        ListNode h1=head;
        ListNode h2 = s.next;
        s.next=null;
        h1=sort(h1);
        h2=sort(h2);
        return merge (h1,h2);
    }
    public ListNode merge(ListNode h1,ListNode h2){
        ListNode d= new ListNode(-1);
        ListNode t = d;
        while(h1!=null && h2!= null){
          if(h1.val<= h2.val){
           t.next=h1;
            h1=h1.next;
          }
          else{
            t.next=h2;
            h2=h2.next;
          }
          t=t.next;
        }
        while(h1!=null){
            t.next = h1;
            h1=h1.next;
            t=t.next;
        }
         while(h2!=null){
            t.next = h2;
            h2=h2.next;
            t=t.next;
        }
        return d.next;
    }
}