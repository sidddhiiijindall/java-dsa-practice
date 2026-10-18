class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> st;
        st.insert('a');
        st.insert('e');
        st.insert('i');st.insert('o');
        st.insert('u');
         int low=0,high=0,count=0,ans=INT_MIN;
         while(high<s.length()){
            if(st.find(s[high]) != st.end())count++;
            if(high-low+1 == k){
                ans=max(ans,count);
                if(st.find(s[low]) != st.end())count--;
                low++;
            }
            high++;
         }
         return ans;
    }
};