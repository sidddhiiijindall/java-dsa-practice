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
    ListNode* deleteMiddle(ListNode* head) {
        int c=0;
        ListNode* t = head;
        while( t != nullptr){
            c++;
            t=t->next;
        }
        if(c==1) return head ->next;
        ListNode* s=head,*f=head ,*p;
        if(c%2==0){
            while(f!=nullptr && f->next->next != nullptr){
                s=s->next;f=f->next->next;
            }
            s->next = s->next ->next;
        }
        else{
            while(f->next != nullptr){
                p=s;
                s=s->next;
                f=f->next->next;
            }
            p->next=s->next;
        }
        return head;
    }
};