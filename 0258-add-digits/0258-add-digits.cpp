class Solution {
public:
int add( int n ){
    if(n==0)return 0;
     return (n %10) + add(n/10); 
     
     }
    int addDigits(int num) {
       int ans = add(num);
       while(ans > 9) {
         ans = add(ans);}
       return ans;
    }
};