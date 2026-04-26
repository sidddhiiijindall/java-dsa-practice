class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       vector<int> a(nums.size(), 0);
        vector<int> anss;
        for(int i =0;i<nums.size();i++){
            a[nums[i]-1]++;
        }
        int miss, dou;
        for(int i =0;i<nums.size();i++){
            if(a[i]==0) miss=i+1;
            if(a[i]==2) dou=i+1;
        }
        anss.push_back(dou);
        anss.push_back(miss);
        return anss;
    }
};