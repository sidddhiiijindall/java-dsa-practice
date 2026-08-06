class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i = n ;i<= n*t;i++){
            int j =i;
            int ans =1;
            while(j>0){
             int d= j%10;
             ans*=d;
             j/=10;
            }
             if(ans%t==0)return i;
        }
        return 0;
    }
};