class Solution {
    public int[] runningSum(int[] nums) {
        int ps=nums[0];
        for(int i =1;i<nums.length;i++){
            nums[i]=nums[i]+ps;
            ps=nums[i];
        }
        return nums;
    }
}