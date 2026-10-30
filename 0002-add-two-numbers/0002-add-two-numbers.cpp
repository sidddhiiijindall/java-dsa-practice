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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* i = l1 ; ListNode* j=l2;
        ListNode* start = new ListNode(-1);
        ListNode* newhead=start;
        int carry=0;

        while(i!=nullptr || j!=nullptr){
            int sum=0;
            if(i!=nullptr)sum+=i->val;
            if(j!=nullptr)sum+=j->val;
           sum += carry;
          ListNode* dummy = new ListNode(sum%10);
          start->next= dummy;
          start=dummy;
          carry= sum/10;
          if(i!=nullptr)i=i->next;
          if(j!=nullptr)j=j->next;

        }
        if(carry>0){ ListNode* dummy = new ListNode(carry);
        start->next=dummy;}
        return newhead->next;
    }
};