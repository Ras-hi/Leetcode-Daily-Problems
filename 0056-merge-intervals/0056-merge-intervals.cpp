class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            //selecting an interval 
            int start=intervals[i][0];
            int end=intervals[i][1];
            // for skipping all merged intervals
            if(!ans.empty() && end<=ans.back()[1]){
                continue;
            }
            //checking the rest of the intervals
            for(int j=i+1;j<n;j++){
                if(end>=intervals[j][0]){
                    end=max(end,intervals[j][1]);
                }
                else{
                    break;
                }
            }
            ans.push_back({start,end});
        }
        return ans;
    }
};