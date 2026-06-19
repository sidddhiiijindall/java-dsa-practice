class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int a=0,ca=0;
        for(int i =0;i<gain.size();i++){
      ca += gain[i];
       a= max(a,ca);
        }
        return a;
    }
};