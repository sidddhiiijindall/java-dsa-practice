class Solution {
public:
void fn (vector<int>& arr,vector<vector<int>>& ans, vector<int>& t , int target ,int i){
     if(target==0){ans.push_back(t);
 return;}
    if(i==arr.size())return;
   
    for(int j =i;j<arr.size();j++){
        if(j>i && arr[j]==arr[j-1])continue;
        if(arr[j]>target)break;
        else{
            t.push_back(arr[j]);
            target-=arr[j];
            fn(arr,ans,t,target,j+1);
            target+=arr[j];
            t.pop_back();
        }
    }
    return; 
}
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        vector<vector<int>> ans;
         vector<int> t;
         sort(arr.begin(),arr.end());
         fn(arr,ans, t ,target , 0);
         return ans; 
    }
};