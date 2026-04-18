class Solution {
public:
    string largestOddNumber(string num) {
       int n=-1;
        for(int i =0;i<num.length();i++){
            if((num[i]-'0')%2!=0){
                n=i;
        }}
         return num.substr(0,n+1);
    }
   
};