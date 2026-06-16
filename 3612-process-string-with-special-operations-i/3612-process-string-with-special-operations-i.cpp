class Solution {
public:
    string processStr(string s) {
        string ans="";
        for(int i =0;i<s.length();i++){
            if(s[i]>=97 && s[i]<= 122)ans+=s[i];
           else if(s[i]== '*' && ans.length()>0)ans.pop_back();
            else if(s[i]=='#')ans+=ans;
            else{int i =0,j=ans.length()-1;
            while(i<=j){
                char t = ans[i];
                ans[i]=ans[j];
                ans[j]=t;
                i++,j--;
            } }
        }
        return ans;
    }
};