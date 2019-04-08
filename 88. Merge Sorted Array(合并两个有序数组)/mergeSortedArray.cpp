//法一：sort一下   笑死我


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<n;i++)
            nums1[m+i]=nums2[i];
        sort(nums1.begin(),nums1.end());
    }
};



//法二：
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p=m-- + n-- - 1;
        while(m>=0&&n>=0)
            nums1[p--]=nums1[m]>nums2[n]?nums1[m--]:nums2[n--];
        while(n>=0)
            nums1[p--]=nums2[n--];
    }
};
