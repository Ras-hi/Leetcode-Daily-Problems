class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
//         int sumDiff = 0;
//         int n = nums1.size();

//         for (int i = 0; i < n; ++i) {
//             sumDiff += nums2[i] - nums1[i];
//         }

//         return sumDiff / n;
        int n=nums1.size();
        int m=nums2.size();
        if(m!=n)return -1;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        return nums2[0]-nums1[0];
    }
};