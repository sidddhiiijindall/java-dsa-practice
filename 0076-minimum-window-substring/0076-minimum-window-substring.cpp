class Solution {
public:
    string minWindow(string s, string t) {
        if(s.length()<t.length())return "";
        
        unordered_map<char , int> target;
        unordered_map<char,int> freq;
        
        for(int i =0;i<t.length();i++)target[t[i]]++;
        

        int low=0,high=0,ans=INT_MAX,count=0,start=0,end=0;
        while(high<s.length()){
            if(target.find(s[high])!=target.end()){
                freq[s[high]]++;
            if(freq[s[high]]==target[s[high]])count++;
            }
            while(count==target.size()){
              int length=high-low+1;
              if(ans>length){ans= length,start=low,end=high;}
              if(target.find(s[low])!=target.end())freq[s[low]]--;
              if(target.find(s[low])!=target.end() && freq[s[low]]<target[s[low]])count--;
              low++;
            }
            high++;
        }
       return ans==INT_MAX? "":s.substr(start,end-start+1);
    }
};