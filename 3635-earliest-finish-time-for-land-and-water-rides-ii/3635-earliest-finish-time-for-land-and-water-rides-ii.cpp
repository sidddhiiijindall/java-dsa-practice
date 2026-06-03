class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
         int mtl = INT_MAX, mtw = INT_MAX, minwatertime= INT_MAX, minlandtime = INT_MAX;
         int minsl, mindl;
        for(int i =0;i< landStartTime.size();i++){
           if(landStartTime[i]+ landDuration[i] < mtl){
            mtl = landStartTime[i]+ landDuration[i];
             minsl= landStartTime[i];
            mindl = landDuration[i];
           }
        }
        
        for(int j =0;j<waterStartTime.size();j++){
            int time =0;
             if(minsl<= waterStartTime[j]){
                    time = time + minsl+ mindl;
                    if(waterStartTime[j]<= time ){
                        time += waterDuration[j];
                    }
                    else{
                        time = waterStartTime[j] + waterDuration[j]; 
                    }
                }
                else{
                    time = time + waterStartTime[j]+ waterDuration[j];
                    if(minsl <= time ){
                        time = time + mindl;
                    }
                    else{
                        time = minsl + mindl;
                    } }
                    minlandtime = min(minlandtime , time);
        }
        int minsw, mindw;

        for(int i =0;i< waterStartTime.size();i++){
            if(waterStartTime[i]+ waterDuration[i]< mtw ){
                mtw = waterStartTime[i]+ waterDuration[i];
                minsw =  waterStartTime[i];
                mindw = waterDuration[i];
            }
        }
        for(int i =0;i< landStartTime.size();i++){
            int time =0;
              if(landStartTime[i]<= minsw){
                    time+= landStartTime[i]+ landDuration[i];
                    if( minsw <= time ){
                        time += mindw;
                    }
                    else{
                        time = minsw + mindw; 
                    }
                }
                else{
                    time = time + minsw+ mindw;
                    if(landStartTime[i] <= time ){
                        time = time + landDuration[i];
                    }
                    else{
                        time = landStartTime[i] + landDuration[i];
                    }
                }
                minwatertime = min(minwatertime , time);
        }

  return min(minlandtime , minwatertime);

           
    }
};