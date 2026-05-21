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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* t= head;
        if(t==nullptr || t->next == nullptr)return head;
        while(t!= nullptr &&  t->next != nullptr){
            if(t->val == t->next->val ){
                t->next = t->next->next;
            }else{
            t=t->next;}
        }
        return head;
    }
};