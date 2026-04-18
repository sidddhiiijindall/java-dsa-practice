class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int i =0;
        int a[128]={0};
        int b[128]={0};
        while(i< s.length()){
          int f=s[i], d=t[i];
          if( (a[f]==0 && b[d]==0)||( a[f]==d && b[d]==f)){
            a[f]=d;
            b[d]=f;
          }

          else{
            return false;
          }
          i++;
        }
        return true;
    }
};