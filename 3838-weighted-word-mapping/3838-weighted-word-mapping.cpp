class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        for(int i =0;i< words.size();i++){
            string a = words[i];
            int s=0;
           for(int j =0;j< a.length();j++){
            s+= weights[a[j]-'a'];
           }
           ans+= 'z'- (s%26);
        }
        return ans;
    }
};