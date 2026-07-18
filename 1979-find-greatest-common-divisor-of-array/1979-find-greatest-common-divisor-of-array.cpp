class Solution {
public:
    int findGCD(vector<int>& nums) {
        int s = INT_MAX,l=INT_MIN,gcd=1;
        for(int i =0;i<nums.size();i++){
            s= min(s, nums[i]);
            l= max(l,nums[i]);
        }
        for(int i = s;i>0;i--){
            if(s%i ==0 && l%i==0){gcd= i; break;} 
        }
        return gcd;
    }
};