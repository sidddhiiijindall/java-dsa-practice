class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,sum=0,ans=INT_MAX,f=0;
        while(j<nums.size()){
            sum+=nums[j];
            if(sum<target)j++;
            else {
                ans = min(ans , j-i+1);
                f=1;

                while(sum>=target){
                    sum-=nums[i];
                    i++;
                    if(sum>=target)ans=min(ans , j-i+1);
                    
                }
             j++;
            }
        
        }
        if(f==0)return 0;
        return ans;
    }
};