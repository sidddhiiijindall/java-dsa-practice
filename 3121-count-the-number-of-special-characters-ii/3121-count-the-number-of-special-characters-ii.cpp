class Solution {
public:
    int numberOfSpecialChars(string word) {
        int lo[26]={0};
        int fc[26]={0};
        bool small[26]={false};
        bool cap[26]={false};
        bool check[26]={false};
        for(int i =0;i<word.length();i++){
            if(word[i]>= 65 && word[i]<=90 && check[word [i]-'A']==false ){fc[word[i]-'A']=i;
            cap[word[i]-'A']=true;
            check[word[i]-'A']=true;}
            else if (word[i]>=97 && word[i]<=122 ){
                lo[word[i]-'a']=i;
                small[word[i]-'a']=true;
            }
        }
        int c=0;
        for(int i =0;i< 26 ;i++){
            if(lo[i]<fc[i] && small[i]==true && cap[i]==true)c++;
        }
        return c;
    }
};