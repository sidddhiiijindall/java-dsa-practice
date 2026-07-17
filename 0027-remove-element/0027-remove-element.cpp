class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k =0;
        for(int s=0;s<nums.size();s++){
            if(nums[s]!=val)k++;
        }
      int i=0,j=nums.size()-1;
      while(i<nums.size() && i<k){
        if(nums[i]==val){
            while(j>0 && nums[j]==val)j--;
           nums[i]=nums[j];
           nums[j]=val;
           i++,j--;
        }
        else i++;
      }
      return k;
    }
};