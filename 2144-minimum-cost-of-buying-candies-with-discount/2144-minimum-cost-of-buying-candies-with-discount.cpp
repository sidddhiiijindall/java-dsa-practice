class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int c=0;
        sort(cost.begin(),cost.end());
        for(int i = cost.size()-1;i >=0;i--){
            c+= cost[i];
            i--;

            if(i>=0){
                c+=cost[i];
                i--;
            }
        }
        return c;
    }
};