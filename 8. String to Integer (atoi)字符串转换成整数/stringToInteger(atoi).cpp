/*这个题一定要认真审题，要不就会像我一样浪费很多时间，
题干中说了是“连续的数字“，那题干的意思就是在原字符串之中如果出现夹杂非数字的		
字符，那么就会停止，输出，例如，如果出现 "7878ab78" 这样的字符串，那么正确的输出应
该为7878，我一开始理解为挑选出所有的数字，所以这种情况会错误输出787878；
(1)"+"正号要考虑进去；
(2)"+-"类的情况要考虑进去，不能连续出现两个符号；
(3)"- 3"在符号和数字之间出现空格，那么也不符合题干要求；
(4)"1-7"符号不能出现在数字之间，此情况输出符号前的数字，输出 1；
*/


class Solution {
public:
    int myAtoi(string str) {
        if(str.size()==0)
            return 0;
        int i=0;
        while(str[i]==' ')
            i++;
        int flag=1;
        long long num=0;
        if(str[i]=='+'){
            i++;
            if(str[i]<'0'||str[i]>'9')
                return num;
        }
        if(str[i]=='-'){
            flag=-1;
            i++;
            if(str[i]<'0'||str[i]>'9')
                return num;
        }
        if(str[i]<'0'||str[i]>'9')
            return num;
        while(str[i]!='\0'&&str[i]>='0'&&str[i]<='9'){
            num=num*10+flag*(str[i]-'0');
            if (num > INT_MAX) 
                return INT_MAX;
            else if (num < INT_MIN)
                return INT_MIN;
            i++;
        }
        return num;
    }
};
