/**二分，注意边界。

1.不能写 int mid = (lo + hi) / 2; 要写 int mid = lo + (hi - lo) / 2;
2.这个题目，返回 lo 或者 hi 都行，因为终止条件是 lo == hi.
3.这是二分里比较难的题目了吧，找的是分割点，不是某个值。
4.[********########] 就像这样的有序数组，找第一个 # 号。
5.二分搜索的演化版本，查找某个值，返回其索引，如果找不到，
返回其本来应该所在的位置（比如上面 # 号的位置）。遇到这种二分搜索，就拿这个 bad version 来套就行了。*/

// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int high=n,low=1;
        while(low<high){
            int mid=low+(high-low)/2;
            if(isBadVersion(mid))
                high=mid;
            else
                low=mid+1;
        }
        return high;
    }
};

