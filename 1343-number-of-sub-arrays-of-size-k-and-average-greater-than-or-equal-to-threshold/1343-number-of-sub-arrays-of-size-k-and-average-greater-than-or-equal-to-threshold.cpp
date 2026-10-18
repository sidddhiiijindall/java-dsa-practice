class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count=0,low=0,high=0,sum=0;
        while(high<arr.size()){
          sum+=arr[high];
          if(high-low+1 == k){
            int avg = sum/k;
            if(avg>=threshold)count++;
            sum-=arr[low];
            low++;
          }
          high++;
        }
return count;
    }
};