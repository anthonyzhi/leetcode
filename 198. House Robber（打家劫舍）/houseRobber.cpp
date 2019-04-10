class Solution {
public:
    int rob(vector<int>& nums) {
        int even=0,odd=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0)
                even=(even+nums[i])>odd?even+nums[i]:odd;
            else
                odd=(odd+nums[i])>even?odd+nums[i]:even;
        }
        return even>odd?even:odd;
    }
};


//动态规划  
//动态规划，计算前 i 家的最大值时，考虑第 i 家 偷与不偷。
//如果偷第 i 家，则为第 i 家加上 前 i-2 家最大值。如果不偷第 i 家，则直接返回 前 i - 1 家最大值。

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int dp[nums.size()+1];
        dp[0]=0;
        dp[1]=max(dp[0], nums[0]);
        for(int i=2;i<=nums.size();i++){
            dp[i]=max(dp[i-1], dp[i-2]+nums[i-1]);
        }
        return dp[nums.size()];
    }
};
