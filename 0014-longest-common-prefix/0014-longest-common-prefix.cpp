class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans= strs[0];
        for(int i =1;i<strs.size();i++){
            string sam =strs[i];
            for(int j =0;j<min(sam.length(),ans.length());j++){
                if(sam[j]!=ans[j]){
                    ans=ans.substr(0,j);
                break; }
               
            }
           ans=ans.substr(0,min(ans.length(),strs[i].length()));
        }
        return ans;
    }
};