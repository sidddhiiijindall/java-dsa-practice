class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int low=0,high=0,ans=INT_MAX;
        unordered_map<int,int> st;
        while(high<cards.size()){
            st[cards[high]]++;
            while(st[cards[high]]==2){
                ans=min(ans , high-low+1);
                st[cards[low]]--;
                low++;
            }
            high++;
        }
        return ans==INT_MAX ? -1: ans;
    }
};