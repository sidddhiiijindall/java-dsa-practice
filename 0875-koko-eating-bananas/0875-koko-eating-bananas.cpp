class Solution {
public:
bool isValid(vector<int>& piles , int h , long long mid){
 long long hours=0;
 for(int x:piles){
    if(x % mid==0)hours+= x/mid;
    else hours+= (x/mid)+1;
    if(hours>h)return false;
 }
 return true;
 
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int l =1 , r=piles[0];
        for(int x: piles)r=max(r,x);
        while(l<=r){
            long long mid = l+ (r-l)/2;
            if(isValid(piles, h , mid))r=mid-1;
            else l=mid+1;
        }
        return l;
    }
};