class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int ans = INT_MIN , best=0,sum=0; ;
     if(nums.size()==1)return nums[0];
     for(int i =0;i<nums.size();i++){
         best += nums[i];
        best = max( best ,nums[i] );
        ans = max(ans , best);
     }
     return ans;
    }
};