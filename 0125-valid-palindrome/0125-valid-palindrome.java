class Solution {
    public boolean isPalindrome(String s) {
        StringBuilder check = new StringBuilder();
        for(int i =0;i<s.length();i++){
            char ch =s.charAt(i);
            if(ch >=97 && ch<= 122){
                check.append(ch);
            }
            else if(ch>=65 && ch<=90){
                char d=(char)(ch+32);
                check.append(d);
            }
            else if(ch>='0' && ch<='9'){
                check.append(ch);
            }
        }
    int i =0,j=check.length()-1;
    while(i<j){
        if(check.charAt(i)!=check.charAt(j)){return false;}
        i++;
        j--;
    }
    
    return true ;}
}