class Solution {
public:
    bool isPalindrome(string s) {
        int i =0, n= s.length()-1;
        while(i<n){
            if(!isalnum(s[i])){i++;}
            else if(!isalnum(s[n])){n--;}
            else if(tolower(s[i])!=tolower(s[n])){
                return false;
            }
           else{i++,n--;}
           
        }
        return true;
    }
};