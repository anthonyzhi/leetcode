class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size())
            return false;
        if(s1.size()==0)
            return true;
        vector<int>num1(26);
        vector<int>num2(26);
        for(int i=0;i<s1.size();i++){
            num1[s1[i]-'a']++;
            num2[s2[i]-'a']++;
        }
        for(int i=s1.size();i<s2.size();i++){
            if(num1==num2) 
                return true;
            num2[s2[i-s1.size()]-'a']--;
            num2[s2[i]-'a']++;
        }
        return num1==num2;
        
    }
};
