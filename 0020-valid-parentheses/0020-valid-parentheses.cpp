class Solution {
public:
    bool isValid(string s) {
        char a[s.length()];
        int j=-1;
        if(s[0]=='}' || s[0]==']' ||s[0]==')')return false;
        for(int i =0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){j++;a[j]=s[i];}
            else if(j>=0 && ( (s[i]==')' && a[j]=='(') || (s[i]=='}' && a[j]=='{') || (s[i]==']' && a[j]=='[')  ))
              j--;
              else return false;
            }

        
        if(j==-1)return true;
        return false;

        
    }
};