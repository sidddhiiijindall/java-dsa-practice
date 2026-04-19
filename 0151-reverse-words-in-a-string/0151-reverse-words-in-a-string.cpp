class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        reverse(s.begin(),s.end());
        for(int i =0;i<s.length();i++){
           if(s[i]!=' '){
            int start=i;
            while( i <s.length() && s[i]!=' ' )i++;
           int  end= i ;
            string w = s.substr(start,end-start);
            reverse(w.begin() , w.end());
           if(ans.length()>0) ans+=" "; // important step 
            ans+=w;
           
           }
        }
        return ans;
    }
  
};