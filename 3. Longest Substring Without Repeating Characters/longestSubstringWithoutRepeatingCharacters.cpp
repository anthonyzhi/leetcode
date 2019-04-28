class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>map;
        int len=s.size(),res=0;
        for(int i=0,j=0;j<len;j++){
            if(map.find(s[j])!=map.end()){
                i=max(map.at(s[j]),i);               
            }
            map[s[j]]=j+1;
            res=max(res,j-i+1);
        }
        return res;
    }
};
