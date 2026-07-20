class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        int num =0, i=0,n= s.length();
        while(i<n && s[i]==' ')i++;
        if ( s[i] == '-'){sign = -1; i++;}
         if ( s[i] == '+' && sign == 1){sign = 1;i++;}
          if((s[i]== '-' || s[i]== '+') && (sign == 1 || sign ==-1) )return 0;
        while(i<n && s[i]== '0')i++;
        while(i<n){
            if(s[i]<'0' || s[i]>'9')return sign* num;
            int d= s[i]-'0';
            if(num > INT_MAX/10 || (num == INT_MAX/10 && d>7)){
                return (sign==1)?INT_MAX : INT_MIN;
            }
            num = num*10 + d;
            i++;
        } 
        
        return sign * num;
    }
};