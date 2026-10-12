class Solution {
public:
bool check(int ind, string& s ,string& p ,int f[]){
    int a[26]={0};
    for(int i =ind;i<ind+p.length();i++)a[s[i]-'a']++;
    for(int i =0;i<26;i++){
        if(f[i]!=a[i])return false;
    }
    return true ;
}
    vector<int> findAnagrams(string s, string p) {
          vector<int> ans;
        if(p.length()>s.length())return ans;
        int f[26]={0};
      
        for(int i =0;i<p.length();i++)f[p[i]-'a']++;
        int low=0;
        while(low<=s.length()-p.length()){
            if(f[s[low]-'a']!=0){
                if(check(low , s, p, f))ans.push_back(low);
            }
            low++;
        }
        return ans;
    }
};