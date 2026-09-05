class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> a , b(nums.size());
        int rmin=INT_MAX,rm=INT_MIN;
        for(int i =0;i<nums.size();i++){
            rm=max(rm,nums[i]);
            a.push_back(rm);
        }
        for(int i =nums.size()-1;i>=0;i--){
            rmin= min(rmin,nums[i]);
            b[i]=rmin;
        }
        for(int i =0;i<nums.size();i++){
            if(a[i]-b[i]<=k)return i;
        }
        return -1;
    }
};