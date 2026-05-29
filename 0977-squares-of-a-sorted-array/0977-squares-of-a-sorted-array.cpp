class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> a;
       
        int i =0,j=nums.size()-1;
        while(i <=j){
            int ls = nums[i]* nums[i];
            int rs = nums[j]*nums[j];
            if(ls>=rs){
                a.insert(a.begin(),ls);
                i++;
            }
            else{
               a.insert(a.begin(),rs);
                j--;
            }
        }
        return a ;
    }
};