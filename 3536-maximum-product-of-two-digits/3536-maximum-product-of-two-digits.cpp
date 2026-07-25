class Solution {
public:
    int maxProduct(int n) {
        string a = to_string(n);
        int f=a[0]-'0';
        int ans = INT_MIN;
        for(int i=1;i<a.length();i++){
           
            ans = max(ans , f* (a[i]-'0') );
            f= max(f,a[i]-'0');
        }
        return ans;
    }
};