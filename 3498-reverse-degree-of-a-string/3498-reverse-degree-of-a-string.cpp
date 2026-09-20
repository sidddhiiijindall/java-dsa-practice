class Solution {
public:
    int reverseDegree(string s) {
        int ans=0,arr[26],c=1;
        for(int i=0;i<s.length();i++){

            int d= c*(26- (s[i]-'a'));
            ans+=d;
            c++;
        }
   return ans;
    }
};