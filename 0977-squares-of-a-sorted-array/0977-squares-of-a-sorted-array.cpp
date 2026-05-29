class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      int n = nums.size();
        vector<int> a(n);
        int i =0,j=nums.size()-1,k=n-1;
        while(i <=j){
            int ls = nums[i]* nums[i];
            int rs = nums[j]*nums[j];
            if(ls>=rs){
                a[k]=ls;
                k--;
                i++;
            }
            else{
               a[k]=rs;
               k--;
                j--;
            }
        }
        return a ;
    }
};