class Solution {
public:
bool isValid(vector<int>& bloomDay, int m , int k , int mid){
    int bloomed=0,bouq=0,a=0;
    for(int x:bloomDay){
        if(x<=mid){
            if(a==0){
                a=1;
                bloomed=1;
            }
            else{
                bloomed++;
            }
             if(bloomed==k){bouq++;a=0;}
        }
        else a=0;
       
    }
    

    if(bouq >= m)return true;
    else return false;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long n= (long long)m* (long long)k;
        if(bloomDay.size()<n)return -1;
        int l =bloomDay[0],h=0,ans;
        for(int x:bloomDay){
            l=min(l,x);
            h=max(h , x);
        }
        while(l<=h){
            int mid = l+ (h-l)/2;
            if(isValid(bloomDay , m , k , mid)){
                h=mid-1;
                ans=mid;
            }
            else l=mid+1;
        }
        return ans;
    }
};