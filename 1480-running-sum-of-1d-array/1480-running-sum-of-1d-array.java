class Solution {
    public int[] runningSum(int[] nums) {
        int n = nums.length;
        if(n==1){
            return nums;
        }
        int i =0,j=1;
        while(j<n){
            nums[j]=nums[j]+nums[i];
            i++;
            j++;
        }
        return nums;
    }
}