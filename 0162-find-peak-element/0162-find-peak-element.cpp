class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i =0,n=nums.size(),j=n-2;
        if(n==1) return 0;
       if(nums[i]>nums[i+1]){ return 0;}
        if(nums[n-1]>nums[n-2]) return n-1;
       i=1;
        while(i<=j){
          int mid = (i+j)/2;
          if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
            return mid;
          }
          else if(nums[mid+1]>nums[mid]){i=mid+1;}
          else{j=mid-1;}
        }
    
         
        
        return 0;
    }
};