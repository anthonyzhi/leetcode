//法一：动态规划

class Solution {
public:
    int climbStairs(int n) {
        if(n==1)
            return 1;
        int sum[n+1];
        sum[1]=1;
        sum[2]=2;
        for(int i=3;i<=n;i++)
            sum[i]=sum[i-1]+sum[i-2];
        return sum[n];
    }
};


//斐波那契
        
class Solution {
public:
    int climbStairs(int n) {
        if(n==1)
            return 1;
        int first = 1;
        int second = 2;
        for (int i = 3; i <= n; i++) {
            int third = first + second;
            first = second;
            second = third;
        }
        return second;
    }
};
