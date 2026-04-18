class Solution {
public:
    string largestOddNumber(string num) {
       int n=-1;
        for(int i =0;i<num.length();i++){
            if((num[i]-'0')%2!=0){
                n=i;
        }}
         string ans="";
         if(n!=-1){
         ans = add(num,n);}
        return ans;
    }
    string add(string num,int n){
        string s="";
        for(int j=0;j<=n;j++){
         s.push_back(num[j]);
        }
        return s;
    }

};