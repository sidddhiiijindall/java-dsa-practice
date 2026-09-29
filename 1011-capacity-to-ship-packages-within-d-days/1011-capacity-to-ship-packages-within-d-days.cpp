class Solution {
public:
     bool isValid(vector<int>& weights, int days,int c ){
        int day=1, curr=0;
     for(int x:weights){
        if(curr+x >c){day++,curr=x;}
        else curr+=x;
     }
     
     if(day<=days)return true;
     else return false;
     }
    int shipWithinDays(vector<int>& weights, int days) {
     int l =0,h=0,ans;
     for(int x:weights){
        l=max(l,x);
        h+=x;
     }
     while(l<=h){
       int mid= l+ (h-l)/2;
       if(isValid(weights,days,mid)){
        ans=mid;
        h=mid-1;
       }
       else l=mid+1;
     }
     return ans;
    }
};