class Solution {
public:
    string removeOuterParentheses(string s) {
        int outerCount=0,innerCount=0;
        string ans="";
        for(int i =0;i<s.length();i++){
            if(s[i]=='('){
               if( outerCount==0)outerCount++;
               else {ans.push_back('('); innerCount++;}
            }
            else{
                if(innerCount>0){ans.push_back(')');
                innerCount--;}
                else outerCount--;
            }
        }
        return ans;
    }
};