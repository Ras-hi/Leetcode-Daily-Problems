class Solution {
public:
    int arraySign(vector<int>& nums) {
        int result=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                result=0;
            }
            else if(nums[i]<0){
                nums[i]=-1;
                result *=nums[i];                
            }
            else{
                nums[i]=1;
                result *=nums[i];
            }
        }
        return result;
    }
};
