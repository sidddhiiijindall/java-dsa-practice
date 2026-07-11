class Solution {
public:
void fn(vector<int>&arr, vector<vector<int>>& ans , vector<int>& t, int i ){
     ans.push_back(t);
     if(i== arr.size()){
      return;}
     
   
    for(int j =i;j<arr.size();j++){
        if(j>i && arr[j]==arr[j-1])continue;
    t.push_back(arr[j]);
    fn(arr,ans,t,j+1);
    t.pop_back();
}
return;
}
    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
       vector<vector<int>> ans;
       vector<int> t;
       sort(arr.begin(),arr.end());
       fn(arr,ans , t, 0);
       return ans; 
    }
};