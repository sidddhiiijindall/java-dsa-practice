/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        int l1=0,l2=0;
        ListNode t = headA, p=headB;
        while(t!=null){
            l1++;
            t=t.next;
        }
        while(p!=null){
            l2++;
            p=p.next;
        }
        t=headA;
        p=headB;
        if (l1>l2){
            int n = l1-l2;
            for (int i =0;i<n;i++){
                t=t.next;
            }
           return Move(t , headB);
        }
        else{
            int n = l2-l1;
            for (int i =0;i<n;i++){
                p=p.next;
            }
           return Move(headA, p);
        }
    }
    public ListNode Move(ListNode a,ListNode b ){
        ListNode s=a;
        ListNode f =b;
        while(s!= null && f!=null){
            if(s==f){
                return s;
            }
            s=s.next ;
            f=f.next;
            
        } 
        return null;
        
    }
}