class Solution {    //二分法
public:
    int splitArray(vector<int>& nums, int m) {
        long low=0,high=0;
        for(int num:nums){          //结果必定落在[max(nums),sum(nums)]
            low=max(low,(long)num);
            high+=num;
        }
        while(low<high){
            long mid=low+(high-low)/2;
            long count=1,sum=0;
            for(int num:nums){
                if(sum+num>mid){
                    count++;
                    sum=0;
                }
                sum+=num;
            }
            if(count>m)
                low=mid+1;
            else
                high=mid;
        }
        return low;
    }
};
