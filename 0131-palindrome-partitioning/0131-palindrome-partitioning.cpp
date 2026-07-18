class Solution {
public:
    bool check(string a){
       int l=0,r= a.length()-1;
       while(l<=r){
        if(a[l]!=a[r])return false;
        l++,r--;
       }
       return true ;
    }
    void fn(vector<vector<string>>& ans , vector<string>& t , int i , string s ){
      if(i==s.length()){
        ans.push_back(t);
        return;
      }
      for(int j =i; j<s.length();j++){
           
          if(check(s.substr(i,j-i+1))){t.push_back(s.substr(i,j-i+1));
          fn(ans , t, j+1, s);
          t.pop_back();}
     
    } }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> t;
        fn(ans , t,0,s);
        return ans;
    }
};