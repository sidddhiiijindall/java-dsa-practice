class Solution {
public:
   void fn(vector<int>& nums , vector<vector<int>>& ans, vector<int>& t, int i ){
    ans.push_back(t);
  for(i; i<nums.size();i++){
       t.push_back(nums[i]);
       fn(nums, ans,t, i+1);
       t.pop_back();
    }

   }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans ;
         vector<int> t;
        fn(nums, ans , t, 0);
        return ans;
    }
};