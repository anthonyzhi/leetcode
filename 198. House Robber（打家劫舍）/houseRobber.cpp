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
