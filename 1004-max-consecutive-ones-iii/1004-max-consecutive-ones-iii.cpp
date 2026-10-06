class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low=0,high=0,ans=INT_MIN,zero=0;
        while(high<nums.size()){
            if(nums[high]==0)zero++;
            if(zero>k){ 
                while(zero>k){
                    if(nums[low]==0)zero--;
                    low++;
                }
               
            }
            ans=max(ans , high-low+1);
            
             high++;
        }
        return ans;
    }
};