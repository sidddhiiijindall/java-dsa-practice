class Solution {
public:
 void fn(int n,string& s,int& o, int& c, vector<string>& ans ){
    if(s.length() == n*2 ){
        if(o==c) ans.push_back(s);
          return ;
    }
    if( s.length()==0 || o<n){
        s.push_back('(');
        o++;
        fn(n,s, o,c,ans);
        s.pop_back();
        o--;
    }
    if(o>c){
        s.push_back(')');
        c++;
        fn(n,s,o,c,ans);
        s.pop_back();
        c--;
    }
 }
    vector<string> generateParenthesis(int n) {
        int  o=0,c=0;
        string s="";
        vector<string> ans;
        fn(n,s ,o,c ,ans);
        return ans;
    }
};