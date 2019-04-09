# 法一：暴力解法：通过将所有结果列出来 判断是否有符合交易的情况，如果有从中取出最大值
# 此算法超时


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        for(int i=0;i<prices.size()-1;i++){
            for(int j=i+1;j<prices.size();j++){
                int profit=prices[j]-prices[i];
                maxProfit=profit>maxProfit?profit:maxProfit;
            }
        }
        return maxProfit;
    }
};
