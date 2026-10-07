class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans =0, low=0,high=0;
        long long prod=1;
        while(high<nums.size()){
            prod*=nums[high];
            while(prod>=k && low<=high){
                prod/=nums[low];
                low++;
            }
            ans+=high-low+1;
            high++;
        }
        return ans;
    }
};