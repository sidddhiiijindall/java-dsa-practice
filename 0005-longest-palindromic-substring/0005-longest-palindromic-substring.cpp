class Solution {
public:
    
    string longestPalindrome(string s) {
       string ans="";
      for(int i=0;i<s.length();i++){
         for(int j = s.length()-1;j>=i;j--){
            int f=1;
            if(s[i]==s[j]){
                int l=i,r=j;
                while(l<=r){
                    if(s[l]!=s[r]){f=0; break;}
                    l++,r--;
                }
                 if(f==1 && ans.length()<j-i+1){ans= s.substr(i,j-i+1);break;}
                 
                
            }  } }
      return ans;
    }
};