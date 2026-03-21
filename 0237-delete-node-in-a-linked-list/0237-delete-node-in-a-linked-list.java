/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public void deleteNode(ListNode node) {
       ListNode i=node;
       ListNode j =node.next;
       ListNode t=null;
        while(j!=null){
            i.val=j.val;
            t=i;
            i=i.next;
            j=j.next;
        }
        t.next=null;
    }
}