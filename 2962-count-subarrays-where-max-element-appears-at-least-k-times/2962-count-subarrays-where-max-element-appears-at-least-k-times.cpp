class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int mx=INT_MIN;
        for(auto it:nums){
            mx=max(mx,it);
        }
        int n=nums.size();
        int freq=0;
        int start=0;
        long long ans=0;
        for(int i=0;i<n;i++){
            //growing phase
            if(nums[i]==mx){
                freq++;
            }
            while(freq==k){
                //shrinking phase
                if(nums[start]==mx){
                    freq--;
                }
                start++;
            }
            ans+=start;
            
        }
        return ans;
    }
};