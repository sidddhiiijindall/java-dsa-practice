class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int n =nums.size();
       int best=nums[0];
       int worst=nums[0]; 
       int ans= nums[0];
       for(int i =1;i<n;i++){
        int v1 = best*nums[i];
        int v2= nums[i];
        int v3=worst*nums[i];
        best = max(v2,max(v1,v3));
        worst= min(v2,min(v1,v3));
       ans = max(ans,max(best,worst));
       }
      return ans;
    }
};