class Solution {
public:
    int maxProduct(vector<int>& nums) {
          int a = nums[0];
          int ans = INT_MIN;
        for(int i =1;i<nums.size();i++){
            ans = max((a-1)* (nums[i]-1) , ans);
            a=max(a,nums[i]);
        }
        return ans ;
    }
};