class Solution {
public:
    int minFlips(string s) {
        int n = s.length();
        s=(s+s);
        string s1(2*n, ' ');
        string s2(n*2, ' ');
        for(int i =0;i<2*n;i++){
        if(i%2==0){
            s1[i]='0';
            s2[i]='1';
        }
        else{
            s1[i]='1';
              s2[i]='0';
        }
    }
    int c=INT_MAX;
    int f1=0;
    int f2=0;
    int i =0,j=0;
    while(j<2*n){
        if(s[j]!= s1[j]){
            f1++;
        }
        if(s[j]!= s2[j]){
            f2++;
        }
        if(j-i+1 > n){
            if(s[i]!=s1[i]){
                f1--;
            }
            if(s[i]!=s2[i]){
                f2--;
            }
            i++;
        }
        if(j-i+1 ==n){
            c=min(c, min(f1,f2));
        }
        j++;
    }
    return c;}
};