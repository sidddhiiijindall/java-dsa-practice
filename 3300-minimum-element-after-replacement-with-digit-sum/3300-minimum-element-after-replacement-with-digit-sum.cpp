class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;
       for(int i =0;i<nums.size();i++){
        int sum =0;
       while(nums[i]>0){
        int d= nums[i]%10;
        sum =sum+d;
        nums[i]/=10;
       }
       ans= min(ans,sum);
       } 
       return ans;
    }
};