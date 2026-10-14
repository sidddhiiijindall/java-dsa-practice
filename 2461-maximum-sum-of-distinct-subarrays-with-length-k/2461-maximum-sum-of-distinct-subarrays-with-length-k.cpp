class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans=0,sum=0 ;
        int low=0,high=0;
        unordered_set<int> st;
        while(high<nums.size()){
            if(st.find(nums[high])==st.end()){sum+=nums[high];
            st.insert(nums[high]);}
            else{
                while(low<=high && st.find(nums[high])!=st.end()){
                st.erase(nums[low]);
                  sum-=nums[low];
                low++;
            }
            sum+=nums[high];
            st.insert(nums[high]);
            }
            if(high-low+1==k){
              ans=max(ans , sum);
              sum-=nums[low];
              st.erase(nums[low]);
              low++;
             }
             high++;
        }
            
       return ans; 

    }
};