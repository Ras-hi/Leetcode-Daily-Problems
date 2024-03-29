class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
//         int mx=INT_MIN;
//         for(auto it:nums){
//             mx=max(mx,it);
//         }
//         int n=nums.size();
//         int freq=0;
//         int start=0;
//         long long ans=0;
//         for(int i=0;i<n;i++){
//             //growing phase
//             if(nums[i]==mx){
//                 freq++;
//             }
//             while(freq==k){
//                 //shrinking phase
//                 if(nums[start]==mx){
//                     freq--;
//                 }
//                 start++;
//             }
//             ans+=start;
            
//         }
//         return ans;
        int mx=*max_element(nums.begin(),nums.end());
        int n=nums.size();
        int cnt=0;
        long long ans=0;
        for(int l =0,r=0;r<n;r++){
            cnt+=(nums[r]==mx);
            while(cnt>=k){
                cnt-=(nums[l++]==mx);
            }
            ans+=l;
        }
        return ans;
    }
};