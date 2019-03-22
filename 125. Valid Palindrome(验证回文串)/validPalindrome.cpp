//题目：给定一个字符串，验证它是否是回文串，只考虑字母和数字字符，可以忽略字母的大小写。

class Solution {
public:
    bool isPalindrome(string s) {
        int j=0;
        for(auto &c:s){
            if(c>='a'&&c<='z'||c>='0'&&c<='9')               
                s[j++]=c;
           else if(c>='A'&&c<='Z')
                s[j++]=c-'A'+'a';
        }
        for(int i=0;i<j/2;i++)
            if(s[i]!=s[j-1-i])
                return false;
        return true;
    }
};
