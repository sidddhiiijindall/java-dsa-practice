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
 ListNode* reverse(ListNode* start){
    ListNode* prev= nullptr;
    ListNode* curr= start;
    ListNode* second;
    while(curr!=nullptr){
        second=curr->next;
        curr->next=prev;
        prev=curr;
        curr=second;
    }
    return prev;
 }
 ListNode*  add(ListNode* l1 , ListNode* l2){
    ListNode* f=l1;
    ListNode* s=l2;
    ListNode* start = new ListNode(-1);
    ListNode* head = start;
    int carry=0;
    while(f!=nullptr && s!=nullptr){
        int sum = f->val+ s->val +carry;
        ListNode* dummy = new ListNode(sum%10);
        carry=sum/10;
        start->next = dummy;
        start=dummy;
        f=f->next , s=s->next;
    }
    while(f!=nullptr){
        int sum = f->val +carry;
         ListNode* dummy = new ListNode(sum%10);
         carry = sum/10;
         start->next=dummy;
         start=dummy;
         f=f->next;
    }
    while(s!=nullptr){
        int sum = s->val +carry;
         ListNode* dummy = new ListNode(sum%10);
         carry = sum/10;
         start->next=dummy;
         start=dummy;
         s=s->next;
    }
    if(carry>0){
         ListNode* dummy = new ListNode(carry);
         start->next=dummy;
    }
    return head->next; 

 }
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* first = reverse(l1);
        ListNode* second=reverse(l2);
         ListNode* finalHead= add(first , second);
         return reverse(finalHead);
    }
};