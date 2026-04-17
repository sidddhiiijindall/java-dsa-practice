class Solution {
public:
    string removeOuterParentheses(string s) {
        int c=0,j=0;
        string a="";
        for (int i =0;i<s.length();i++){
           if(s[i]=='('){
            if(c==0){
                c++;
            }
            else{
               a.push_back('(');
                c++;
            }
           }
           else{
            if(c>1){
               a.push_back(')');
                c--;
            }
            else{c--;}
           }

        }
        return a;
    }
};