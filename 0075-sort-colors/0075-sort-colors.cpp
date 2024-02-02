class Solution {
public:
    /*
        brute force -merge sort tc:O(nlogn)
        merge sort:
        void merge(vector<int>&arr,int low,int mid,int high){
        vector<int>temp;
        int left=low;
        int right=mid+1
        }
        void mergesort(vector<int>&arr,int low,int high){
        if(low>=high) return ;
        int mid=high-(high-low)/2;
        mergesort(arr,low,mid);//left half
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
        }
    */
    void sortColors(vector<int>& nums) {
       // int cnt0=0,cnt1=0,cnt2=0; 
       //  for(int i=0;i<nums.size();i++){
       //      if(nums[i]==0) cnt0++;
       //      else if(nums[i]==1) cnt1++;
       //      else cnt2++;
       //  }
       //  for(int i=0;i<cnt0;i++){
       //      nums[i]=0;
       //  }
       //  for(int i=cnt0;i<cnt0+cnt1;i++){
       //      nums[i]=1;
       //  }
       //  for(int i=cnt0+cnt1;i<nums.size();i++){
       //      nums[i]=2;
       //  }
        int low=0,mid=0,high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++,mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};