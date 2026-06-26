class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)return 0;
      int ans = INT_MIN;
        for(int i =0;i<s.length();i++){
            int l =0;  int a[256]={0};
            for(int j=i;j<s.length();j++){
                if(a[s[j]]!= 0) break;
              else a[s[j]]++; l =j-i+1;
            }
            ans= max(ans,l);
        }
        return ans;
    }
};