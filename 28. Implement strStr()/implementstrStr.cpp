//实现 strStr() 函数。

//给定一个 haystack 字符串和一个 needle 字符串，在 haystack 字符串中找出 needle 字符串出现的第一个位置 (从0开始)。如果不存在，则返回  -1。



class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size()==0)
            return 0;
        if (needle.size() > haystack.size())
            return -1;
        int j=0;//needle指针
        int i=0;
        for (i = 0; i < haystack.size(); ++i) {
            if (j==needle.size()){//判断完成
                return i - needle.size();
            }
            if (haystack[i] == needle[j]){
                j++;
            } else{
                i -= j;
                j=0;
            }
        }
        if (j==needle.size()){//判断完成
            return i - needle.size();
        }
        return -1;
    }
};
