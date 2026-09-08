class Solution {
public:
    int countCommas(int n) {
        if(n<1000)return 0;
        else if(n<=100000)return n-999;
        else if(n<100000000)return 100000-999 + 2*(n-1000000);
        return 0;
    }
};