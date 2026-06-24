class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        int ne =0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                a.push(s[i]);
                ne=1;
            }
            else if(a.empty())return false;
            else if(s[i]==')' && ne ==1 && a.top() == '(')a.pop();
            else if(s[i]=='}' && ne==1 && a.top() == '{')a.pop();
            else if(s[i]==']' && ne==1 && a.top() == '[')a.pop();
            else{
                return false;
            }
        }
        return a.empty();
    }
};