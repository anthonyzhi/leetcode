
class Solution {
public:
    bool isValid(string s) {
        stack<char>stack;
        map<char,char> map={{'(',')'},{'[',']'},{'{','}'}};
        for(auto it=s.begin();it!=s.end();it++){
            if(map.find(*it)!=map.end())  //若当前元素是开括号
                stack.push(*it);  //入栈
            else //若当前元素是闭括号
            {
                if(stack.empty())
                    return false;
                auto it2=map.find(stack.top());//保存it2关键字为栈顶元素的迭代器
                if(*it==it2->second)
                    stack.pop();
                else
                    return false;
                
            }
        }
        return stack.empty();
    }
};
