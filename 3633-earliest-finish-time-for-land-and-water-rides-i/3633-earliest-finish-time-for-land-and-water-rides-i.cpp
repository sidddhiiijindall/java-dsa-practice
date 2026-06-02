class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int mt = INT_MAX;
        for(int i =0;i< landStartTime.size();i++){

            for(int j =0;j< waterStartTime.size();j++){
                int time =0;
                if(landStartTime[i]<= waterStartTime[j]){
                    time+= landStartTime[i]+ landDuration[i];
                    if(waterStartTime[j]<= time ){
                        time += waterDuration[j];
                    }
                    else{
                        time = waterStartTime[j] + waterDuration[j]; 
                    }
                }
                else{
                    time = time + waterStartTime[j]+ waterDuration[j];
                    if(landStartTime[i] <= time ){
                        time = time + landDuration[i];
                    }
                    else{
                        time = landStartTime[i] + landDuration[i];
                    }
                }
                mt = min( mt , time);
            }
        }
        return mt ;
    }
};