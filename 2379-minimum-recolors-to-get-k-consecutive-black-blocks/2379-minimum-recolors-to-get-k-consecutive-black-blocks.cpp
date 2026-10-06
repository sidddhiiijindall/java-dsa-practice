class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int ans=INT_MAX,white=0,low=0,high=0;
        while(high<blocks.size()){
            if(blocks[high]=='W')white++;
            if(high-low+1==k){
             ans=min(ans , white);
             if(blocks[low]=='W')white--;
             low++;

            }
            high++;
        }
        return ans;
    }
};