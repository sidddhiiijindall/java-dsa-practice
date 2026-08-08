class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==1)return 1;
        int i =0,j=0,l=0,ans=0;
        int ch[256];
        fill(ch,ch+256,-1);
        while(j<s.length()){
            if(ch[s[j]]==-1){
                ch[s[j]]=j;
                l++;
             
            }
            else{
               if(ch[s[j]]>=i)i= ch[s[j]]+1;
              ch[s[j]]=j;
              l= j-i+1; 
            }
            ans=max(ans,l);
            j++;
        }
        return ans;
    }
};