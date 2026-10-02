class Solution {
public:
     bool isValid(vector<int>& candies ,int mid ,  long long k ){
        long long piles=0;
        for(long long x:candies){
            if(x>=mid)piles+=x/mid;
            if(piles>=k)return true;
        }
        if(piles>=k)return true;
        return false;
     }
    int maximumCandies(vector<int>& candies, long long k) {
        long long sum=0;
        {for(long long x:candies)sum+=x;
         
        if(sum<k)return 0;
       }
        int l =1,h=INT_MIN;
        for(int x:candies)h=max(h,x);
        while(l<=h){
            long long mid = l+ (h-l)/2;
            if(isValid(candies , mid , k ))l=mid+1;
            
            else h=mid-1;
        }
        return h;
    }
};