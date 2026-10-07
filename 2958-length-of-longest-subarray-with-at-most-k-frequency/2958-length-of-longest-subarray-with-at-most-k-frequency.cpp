class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
       unordered_map<int, int> freq;
       int low=0,high=0,ans=INT_MIN;
       while(high< nums.size()){
        freq[nums[high]]++;
        while(freq[nums[high]]>k){
              freq[nums[low]]--;
              low++;
        }
        ans=max(ans , high-low+1);
        high++;
       } 
       return ans;
    }
};