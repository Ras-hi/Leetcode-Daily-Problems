class Solution {
public:
    //recursive approach-tle
    // int rob(vector<int>& nums,int n){
    //     if(n<=0){
    //         return 0;
    //     }
    //     else if(n==1){
    //         return nums[0];
    //     }
    //     int robCurrentHouse=nums[n-1]+ rob(nums,n-2);
    //     int skipCurrentHouse=rob(nums,n-1);
    //     return max(robCurrentHouse,skipCurrentHouse);
    // }
    // int rob(vector<int>& nums) {
    //     int n=nums.size();
    //     return rob(nums,n);
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        } else if (n == 1) {
            return nums[0];
        }

        vector<int> dp(n);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
        }

        return dp[n - 1];

    }
};