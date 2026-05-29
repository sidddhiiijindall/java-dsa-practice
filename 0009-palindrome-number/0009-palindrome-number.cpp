class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        long s =0;
        int m=x;
        while(m>0){
            int d = m%10;
            s= (s*10) + d;
            m/=10;
        }
        if(s!=x)return false;
        return true;
    }
};