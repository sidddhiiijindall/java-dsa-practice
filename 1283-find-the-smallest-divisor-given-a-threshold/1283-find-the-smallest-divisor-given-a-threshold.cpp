class Solution {
public:
    bool isValid(vector<int>& nums , int mid ,int threshold){
       int sum=0;
       for(int x:nums){
        int temp=x%mid;
        if(temp==0) sum+=x/mid;
        else sum+= (x/mid)+1;
       }
       if(sum>threshold)return false;
       return true;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1,h=nums[0],ans;
        for(int x:nums)h=max(h,x);
        while(l<=h){
            int mid=l + (h-l)/2;
            if (isValid(nums,mid , threshold)){
                ans=mid;
                h=mid-1;
            }
            else l=mid+1;
        }
        return l;
    }
};