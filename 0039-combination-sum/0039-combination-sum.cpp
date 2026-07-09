class Solution {
public:
void fn(  vector<vector<int>>& ans , vector<int>& arr, vector<int>& t ,int i , int target ){
    if(target ==0){ ans.push_back(t);
    return ;}
    else if(i==arr.size() || target <0){return ;}
    t.push_back(arr[i]);
    target-=arr[i];
    fn(ans , arr, t , i , target);
    t.pop_back();
    target+=arr[i];
     fn(ans , arr, t , i+1 , target);
     return ;
}
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int> t;
         vector<vector<int>> ans;
         fn(ans , arr , t, 0, target);
         return ans;
    }
};