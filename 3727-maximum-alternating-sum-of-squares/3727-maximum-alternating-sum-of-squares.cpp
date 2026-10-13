class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        if(nums.size()==1)return nums[0]*nums[0];
        vector<int> temp ;
        for(int x:nums)temp.push_back(abs(x));
        sort(temp.begin(),temp.end());
        long long ans=0;
        int i =temp.size()-1;
        for(;i>=temp.size()/2;i--)ans+=temp[i]*temp[i];
        while(i>=0){
            ans-=temp[i]*temp[i];
            i--;
        }
    return ans;
    }
};