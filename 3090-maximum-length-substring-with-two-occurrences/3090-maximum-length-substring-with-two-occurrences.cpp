class Solution {
public:
    int maximumLengthSubstring(string s) {
       int low=0, high=0,ans=INT_MIN;
       int a[26]={0};
       while(high<s.length()){
        int ch = s[high]-'a';
        a[ch]++;
        if(a[ch]>2){
            while(low<=high && a[ch]>2){
                a[s[low]-'a']--;
                low++;
            }
        }
        ans=max(ans , high-low+1);
        high++;
       }
       return ans;
    }
};