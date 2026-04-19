class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        int i =0,j=s.length();
         s+=s;

      while(j<s.length()){
        if(s.substr(i,j-i)==goal) return true ;
        i++;
        j++;
      }
      return false;
    }
};