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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode *start=head;
       int c=0;
        while(start!=nullptr){start=start->next; c++;}
        if(c-n==0)return head->next;
        ListNode *prev,*curr=head;
        for(int i =0;i<c-n;i++){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        return head;
    }
};