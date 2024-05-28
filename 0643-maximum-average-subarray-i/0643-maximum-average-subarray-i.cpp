class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double currentsum =0,maxsum=0;
        for(int i=0;i<k;i++){
            currentsum +=nums[i];
        }
        maxsum =currentsum;
        for(int i=k;i<n;i++){
            currentsum +=nums[i]-nums[i-k];
            maxsum =max(currentsum , maxsum);
        }
        return maxsum/k;
    }
};