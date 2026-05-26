class Solution {
public:
    int numberOfSpecialChars(string word) {
        int fa[26]={0};
        for(int i =0;i< word.length();i++){
            if(word[i]>= 97 && word[i]<=122 &&   (fa[word[i]-'a'] ==0)){
               fa[word[i]-'a']++;
            }
        }
         int count =0;
         for(int i =0;i< word.length();i++){
            if(word[i]>= 65 && word[i]<=90 && fa[word[i]-'A'] ==1 ){
              fa[word[i]-'A']++;
              count++;
            }
         }
         return count;
    }
};