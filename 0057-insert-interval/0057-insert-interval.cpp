class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> temp;
        int i =0;
        int start=newInterval[0];
        int end = newInterval[1];
   //non-overlapping
        while(i<intervals.size() && intervals[i][1]<newInterval[0]){temp.push_back(intervals[i]);i++;}
    //overlapping
        while(i<intervals.size() && intervals[i][0]<=end){
            start =min(start,intervals[i][0]);
            end=max(end,intervals[i][1]);
            i++;
        }
        vector<int> t;
        t.push_back(start);
        t.push_back(end);
        temp.push_back(t);
    //non-overlapping
    while(i<intervals.size()){temp.push_back(intervals[i]); i++;}
    return temp;

    }
};