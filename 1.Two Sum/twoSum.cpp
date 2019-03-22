/*题目：给定一个整数数组 nums 和一个目标值 target，
请你在该数组中找出和为目标值的那两个整数，并返回他们的数组下标。
你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个
数组中同样的元素。*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>hashmap;
        vector<int> retVec;
        for(int i=0;i<nums.size();i++){
            if(hashmap.count(target-nums[i])>0){
                retVec.push_back(hashmap[target-nums[i]]);
                retVec.push_back(i);
                return retVec;
            }
            hashmap[nums[i]]=i;
        }
        return retVec;
    }
};
