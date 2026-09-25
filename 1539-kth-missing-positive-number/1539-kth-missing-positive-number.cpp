class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int d=0;
        for(int i=0;i<arr.size();i++){
           d= arr[i]-(i+1);
           if(d>=k)return i+k;
        }
        if(d<k)return arr[arr.size()-1]-d+k;
       return -1;
    
    }
};