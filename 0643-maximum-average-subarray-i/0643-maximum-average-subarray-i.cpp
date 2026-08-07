class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double sum=0;
        for(int i =0;i<k;i++){
            sum+=nums[i];
        }
      double  avg=sum/k;
        int i =0, j=k;
        double ans = avg;
        while(j<nums.size()){
           
            sum-=nums[i];
            sum+=nums[j];
            i++,j++;
            avg = (double)sum/ k;
             ans = max(ans , avg);
        }
        return ans;
    }
};