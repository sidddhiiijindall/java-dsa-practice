class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[128]={0};
        int d[128]={0};
        if(s.length()!=t.length())return false;
        for(int i =0;i<s.length();i++){
           a[s[i]]++;
           d[t[i]]++;
        }
        for(int i =0;i<128;i++){
            if(a[i]!=d[i]) return false;
        }
        return true;
    }
};