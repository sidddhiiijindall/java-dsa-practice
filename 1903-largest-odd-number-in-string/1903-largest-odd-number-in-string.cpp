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
         for(int j=0;j<=n;j++){
         ans.push_back(num[j]);
        }
        }
        return ans;
    }
   
};