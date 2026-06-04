class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0 )return 0;
        if(nums.size()==1)return 1;
        sort(nums.begin(),nums.end());
        int ans= INT_MIN,c=0;

        for(int i =0;i<nums.size()-1;i++){
            if(nums[i+1]-nums[i]==1)c++;

            else if(nums[i+1]==nums[i]){}
            else {
                c=0;
            }
            ans=max(ans,c+1);
        }
        return ans;
    }
};
// to optimise prcatice using unordered set 