class Solution {
public:
    string minWindow(string s, string t) {
        int target[256]={0};
        for(char ch:t){
            target[ch]++;
        }
        int n =s.length();
        int i=0,j=0;
        int count=0;
        int required=t.length();
        int start=0;
        int minLen= INT_MAX;
        while(j<n){
            if (target[s[j]]>0){
                count++;
            }
            target[s[j]]--;
            while (count==required){
                if (minLen>j-i+1){
                    minLen=j-i+1;
                    start=i;
                }
                target[s[i]]++;
                if(target[s[i]]>0){
                    count--;
                }
                i++;
            }
            j++;
            }
            return(minLen==INT_MAX)?"":s.substr(start,minLen);
    }
        };

        
    ;