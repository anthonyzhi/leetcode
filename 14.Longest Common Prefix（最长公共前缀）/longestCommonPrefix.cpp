//编写一个函数来查找字符串数组中的最长公共前缀。

//如果不存在公共前缀，返回空字符串 ""。


//方法一   LCP(S 1 …S n  )=LCP(LCP(LCP(S 1  ,S 2  ),S 3  ),…S n  )

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





//方法二我们从前往后枚举字符串的每一列，先比较每个字符串相同列上的字符（即不同字符串相同下标的字符）然后再进行对下一列的比较。

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
            return "";
        for(int i=0;i<strs[0].size();i++){
            char c=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(i==strs[j].size()||strs[j][i]!=c)
                    return strs[0].substr(0,i);
            }
        }
        return strs[0];
    }
};
