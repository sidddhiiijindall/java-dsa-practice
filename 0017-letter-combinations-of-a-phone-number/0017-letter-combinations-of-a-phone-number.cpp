class Solution {
public:
void fn(vector<string>& ans ,string& t,vector<string>& alph ,string& s,  int i  ){
    
    if(i==s.length()){
        if(t.length()>0){
        ans.push_back(t);}
        return;
    }
  
    
              int ind = s[i]-'0';
      string ch= alph[ind-2];
    for(int j =0;j<ch.length();j++){
       

      t.push_back(ch[j]);
      fn(ans,t,alph,s,i+1);
      t.pop_back();
    } 
    return;
}
   
    vector<string> letterCombinations(string s) {
       vector<string> ans;
        string t="";
        vector<string> alph;
       alph.push_back("abc");
        alph.push_back("def");
         alph.push_back("ghi");
          alph.push_back("jkl");
           alph.push_back("mno");
            alph.push_back("pqrs");
             alph.push_back("tuv");
              alph.push_back("wxyz");
        
        fn(ans , t, alph , s, 0);
        return ans;
    }
};