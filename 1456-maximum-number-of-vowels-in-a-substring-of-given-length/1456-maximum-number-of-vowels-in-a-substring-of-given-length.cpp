class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0,j=0,ans=0,c=0;
        for(;j<s.length();j++){
            if(s[j]=='a'|| s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')c++;
            if(j-i+1==k){
                ans=max(ans, c);
                if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')c--;
                i++;           
            }
             

        }
        return ans;
    }
};