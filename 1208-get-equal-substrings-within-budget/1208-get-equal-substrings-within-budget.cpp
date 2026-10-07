class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int low=0,high=0,ans=0,cost=0;
        while(high<s.length()){
            if(s[high]!=t[high])cost+= abs(s[high]-t[high]);
            while(cost>maxCost){
                 cost-= abs(s[low]-t[low]);
                 low++;
            }
            ans=max(ans , high-low+1);
            high++;
        }
        return ans;
    }
};