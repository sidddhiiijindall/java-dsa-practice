class Solution {
public:
    int maxVowels(string s, int k) {
        int v=0;
        for(int i =0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){v++;}
           
        }
        int j =k,i=0;
        int ans = v;
        while(j<s.length()){
           if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')v--;
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')v++;
            i++,j++;
            ans=max(ans ,v);
        }
        return ans;
    }
};