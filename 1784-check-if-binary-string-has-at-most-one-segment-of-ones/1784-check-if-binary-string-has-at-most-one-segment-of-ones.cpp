class Solution {
public:
    bool checkOnesSegment(string s) {
        int i =0;
        while(i<s.length() && s[i]!='0'){
             i++;
            }
            int j =i+1;
            while(j<s.length()){
                if(s[j]=='1'){
                    return false ;
                }
                j++;
            }
            return true;
        }
    
};