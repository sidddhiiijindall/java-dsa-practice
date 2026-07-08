class Solution {
public:
    void fn (vector<vector<int>>& ans , vector<int>& t,vector<int>& candidates,int i , int target, int& sum ){
        if (sum>= target ){
            if(sum== target )ans.push_back(t);
            return ;
        }
        for(int j =i; j<candidates.size();j++){
            t.push_back(candidates[j]);
            sum+= candidates[j];
            fn(ans , t , candidates ,j ,target , sum);
            sum-=candidates[j];
            t.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> t;
        int sum =0;
        fn(ans , t , candidates , 0, target , sum );
        return ans;
    }
};

