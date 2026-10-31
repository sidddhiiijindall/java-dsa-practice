class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        int start=intervals[0][0] , end=intervals[0][1];
        
        for(int i =1;i<intervals.size();i++){

              vector<int> temp ;
            if(intervals[i][0]<=end){
              start = min(start , intervals[i][0]);
                end=max(end  , intervals[i][1]);
                 }
            else{
                 temp.push_back(start);
           temp.push_back(end);
                 ans.push_back(temp);
                start = intervals[i][0];
                end= intervals[i][1];
            }
           }
           vector<int>temp;
           temp.push_back(start);
           temp.push_back(end);
           ans.push_back(temp);
        return ans;
    }
};