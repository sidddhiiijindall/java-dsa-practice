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
    int pairSum(ListNode* head) {
        int ans = INT_MIN;
        ListNode* t= head;
        vector<int>c;
        while(t!=nullptr){ c.push_back(t->val);
        t=t->next;}
        int i =0,j= c.size()-1;
        while(i<j){
            int sum = c[i]+c[j];
            ans= max(ans, sum);
            i++,j--;
        }
        return ans;
       
    }
};