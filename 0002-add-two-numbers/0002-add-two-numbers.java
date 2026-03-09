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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
     
        ListNode f= l1;
        ListNode s= l2;
        ListNode t = new ListNode(0);
        ListNode h =t;
        int c=0;
        while(f!=null && s!=null){
           
             ListNode sum= new ListNode( f.val+s.val+c);    
            if (sum.val> 9) {
                sum.val -= 10;
                c=1;
            }
            else{c=0;}
           
            t.next=sum;
            t=sum;
            f=f.next;
            s=s.next;
 }
 while(f!=null){
       ListNode sum= new ListNode( f.val+c);
        if (sum.val> 9) {
                sum.val -= 10;
                c=1;
            }
            else{c=0;}
            t.next=sum;
            t=sum;
              f=f.next;
 }
 while(s!=null){
       ListNode sum= new ListNode( s.val+c);
        if (sum.val> 9) {
                sum.val -= 10;
                c=1;
            }
            else{c=0;}
            t.next=sum;
            t=sum;
            s=s.next;
 }
 if (c>0){
    ListNode sum= new ListNode(c);
        t.next=sum;
 }
 return  h.next;

    }
   public ListNode rev(ListNode h1){
        ListNode prev= null;
        ListNode t =h1;
        ListNode fron;
        while(t!=null){
            fron=t.next;
            t.next= prev;
            prev=t;
            t=fron;
        }
        return prev;
    
        
    }
};