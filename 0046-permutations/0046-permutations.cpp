class Solution {
public:
  void solve(vector<int>& nums, vector<vector<int>>& ans, vector<int>& temp,int f[]){
    if(temp.size()==nums.size()){
        ans.push_back(temp);
        return;
    }
    for(int i =0;i<nums.size();i++){
        if(!f[i]){
          f[i]=1;
            temp.push_back(nums[i]);
            solve(nums, ans, temp, f);
            f[i]=0;
            temp.pop_back();
        }
    }
    
  }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        vector< vector<int>> ans;
        int n = nums.size();
        int f[n];
        for(int i =0;i< nums.size();i++){
            f[i]=0;
            solve(nums,ans,temp , f);
            
        }
        return ans;
    }
};