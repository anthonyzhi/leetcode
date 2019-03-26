//编写一个函数来查找字符串数组中的最长公共前缀。

//如果不存在公共前缀，返回空字符串 ""。


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
            return "";
        string prevstr=strs[0];
        for(int i=1;i<strs.size();i++){
            while(strs[i].find(prevstr)!=0)
            {
                prevstr=prevstr.substr(0,prevstr.size()-1);
                if(prevstr.empty())
                    return "";
            }
        }
        return prevstr;
    }
};
