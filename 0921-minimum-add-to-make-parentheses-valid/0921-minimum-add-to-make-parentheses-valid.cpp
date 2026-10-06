class Solution {
public:
    int minAddToMakeValid(string s) {
        int openCount = 0,closeCount=0;
        for(int i =0;i<s.length();i++){
            if(s[i]=='(')openCount++;
            else if(s[i]==')' && openCount>0)openCount--;
            else closeCount++;
        }
        
        int ans= openCount+closeCount;
        if(ans <0)return ans*-1;
        return ans;
    }
};