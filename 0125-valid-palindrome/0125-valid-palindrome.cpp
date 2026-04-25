class Solution {
public:
    bool isPalindrome(string s) {
        int i =0;
        string st ;
        for(int i =0;i<s.length();i++){
            if(s[i]>=97 && s[i]<= 122 || s[i]>='0' && s[i]<='9'){
                st.push_back(s[i]);
            }else if(s[i]>= 65 && s[i]<= 90) st.push_back(s[i] + 32);
        }
         int n= st.length()-1;
        while(i<n){
            
            if(st[i]==st[n]){
                i++;
                n--;
            }
           
            else{
                return false;
            }
        }
        return true;
    }
};