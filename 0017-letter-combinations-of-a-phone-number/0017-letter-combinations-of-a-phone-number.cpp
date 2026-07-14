class Solution {
public:
  void fn (string digits, vector<string>& ans, int i ,vector<string>& check, string& t){
    if(t.length()== digits.length()){
        ans.push_back(t);
        return ;
    }
    int n = digits[i]-'0';
    string a= check[n-2];
    for(int j =0;j< a.length();j++ ){
        t.push_back(a[j]);
        fn(digits , ans , i+1 ,check , t);
        t.pop_back();
    }
    
  }
    vector<string> letterCombinations(string digits) {
       vector<string> check;
       check.push_back("abc");
        check.push_back("def");
         check.push_back("ghi");
          check.push_back("jkl");
           check.push_back("mno");
            check.push_back("pqrs");
             check.push_back("tuv");
              check.push_back("wxyz");
              string t="";
              vector<string> ans; 
              fn(digits, ans , 0, check , t);
              return ans;
    }
};