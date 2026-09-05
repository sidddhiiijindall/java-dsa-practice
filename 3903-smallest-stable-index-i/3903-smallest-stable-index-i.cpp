class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int ans=INT_MAX ,rm=INT_MIN, mn=INT_MAX,f=0,ind=-1;
        vector<int> a,b(nums.size());
        for(int i =0;i<nums.size();i++){
            rm= max(rm , nums[i]);
            a.push_back(rm);
        }
        for(int i =nums.size()-1;i>=0;i--){
            mn= min(mn,nums[i]);
            b[i]=mn;
        }

        for(int i =0;i<nums.size();i++){
           if(a[i]-b[i]<=k)return i;
            }
            
        return -1 ;
    }
};