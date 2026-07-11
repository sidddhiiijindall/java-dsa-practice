class Solution {
public:
   void fn(vector<int>& t, vector<vector<int>>& ans , int k , int n,int i  ){
    if(t.size()==k){
        if(n==0)ans.push_back(t);
        return;
    }
    for(int j =i;j<=9;j++){
        t.push_back(j);
        n-=j;
        fn(t,ans,k,n,j+1);
        n+=j;
        t.pop_back();
    }
    return;
   }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> t;
        vector<vector<int>> ans;
        fn(t,ans,k,n,1);
        return ans;
    }
};