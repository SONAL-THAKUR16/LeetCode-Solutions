class Solution {
public:
    bool isPalindrome(string s) {
     int n=s.length();
     string str1="";
     for(auto ch:s){
        if(isalnum(ch))
        str1+=tolower(ch);
     }   
     string str2=str1;
     reverse(str1.begin(),str1.end());
     return (str1==str2);
     
    }
};