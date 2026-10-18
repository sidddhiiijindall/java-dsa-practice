class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0,high=0,ans=INT_MAX,sum=0;
        while(high<nums.size()){
            sum+=nums[high];
            while(sum>=target){
                ans=min(ans , high-low+1);
                sum-=nums[low];
                low++;
            }
            high++;
        }
        if(ans==INT_MAX)return 0;
        return ans;
    }
};