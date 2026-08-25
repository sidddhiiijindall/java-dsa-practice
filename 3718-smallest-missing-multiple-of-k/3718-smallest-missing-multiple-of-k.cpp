class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
      unordered_set<int> st;
      int m = nums[0];
        for(int i =0;i<nums.size();i++){
             st.insert(nums[i]);
             m = max(m , nums[i]);   
        }
        int d = (m/k) + 2;
        for(int i=1;i< d ;i++){
            int x= k*i;
            if(st.find(x)==st.end())return x;
        }
        return 0 ;
    }
};