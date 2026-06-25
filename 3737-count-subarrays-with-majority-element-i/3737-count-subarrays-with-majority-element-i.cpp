class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int sub =0;
        for(int i =0;i<nums.size();i++){
            int c=0;
            for(int j =i;j<nums.size();j++){
                if(nums[j]==target)c++;
                int l = j-i+1;
                if(c>l/2)sub++;
            }
        }
   return sub;
    }
};