class Solution {
public:
 void fn(string digits , string& t , vector<string>& ans , int i , vector<string>& alph){
    if(i==digits.size()){
        ans.push_back(t);
        return;
    }
   int ind = digits[i]-'0';
    string a= alph[ind-2];
    for(int j =0;j< a.length();j++ ){
        t.push_back(a[j]);
        fn(digits , t , ans , i+1, alph);
        t.pop_back();
    }
    return;
 }
    vector<string> letterCombinations(string digits) {
        vector<string> alph;
        alph.push_back("abc");
        alph.push_back("def");
        alph.push_back("ghi");
        alph.push_back("jkl");
        alph.push_back("mno");
        alph.push_back("pqrs");
        alph.push_back("tuv");
        alph.push_back("wxyz");
        string t ="";
        vector<string> ans ;
        fn(digits , t , ans , 0 , alph);
        return ans ;
    }
};