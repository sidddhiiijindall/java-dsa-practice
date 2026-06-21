class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
      int b= 0,i=0,c=0;

      sort(costs.begin(),costs.end());
      if(costs[0]>coins)return 0 ;
      while(b<coins && i<costs.size()){
        b+=costs[i];
        c++,i++;
      }  
      if(b>coins)c--;
      return c;
    }
};