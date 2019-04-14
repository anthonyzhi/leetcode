
 /*
        1、从后往前看，先将当前字符转换为对应数值，再判断当前数值是否大于它的前一个数值；
        2、若大于等于它的前一个数值，那么加上该值
        3、若小于它的前一个数值，那么减去该值
        */
class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        int cur = 0;
        int last = 0;
        for(int i =s.size() - 1;i>=0;i--){
            switch(s[i]){
                case 'I': cur = 1;break;
                case 'V': cur = 5;break;
                case 'X': cur = 10;break;
                case 'L': cur = 50;break;
                case 'C': cur = 100;break;
                case 'D': cur = 500;break;
                case 'M': cur = 1000;break;
            }
            
            if(cur>=last) {
                result+=cur;
            }
            else{
                result-=cur;
            }
            last = cur;
        } 
        return result;
    }
};

