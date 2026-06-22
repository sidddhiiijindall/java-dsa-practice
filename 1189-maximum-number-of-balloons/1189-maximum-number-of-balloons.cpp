class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b =0,a=0,l=0,o=0,n=0,s=0,t=0;
        for(int i =0;i<text.length();i++){
          if(text[i]=='b')b++;
          else if(text[i]=='a')a++;
          else if(text[i]=='l'){if(t==1)l++,t=0;
          else{ t=1;} }
          else if(text[i]=='o'){if(s==1)o++,s=0;
          else{s=1;}}
          else if(text[i]=='n')n++;
        }
     int ans = min(b,a);
     ans = min(ans,l);
     ans= min(ans,o);
     ans = min(ans,n);
     return ans;
    }
};