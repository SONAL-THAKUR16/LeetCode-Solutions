class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string str="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '&&str!=""){
                ans=str+" "+ans;
                str="";
            }
            else if (s[i]==' ')
            continue;
            else
            str+=s[i];        
        }
        if(str!="")
        ans=str+' '+ans;
        ans.pop_back();
        return ans;

    }
};