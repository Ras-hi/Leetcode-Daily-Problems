class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0;
        while(i<g.size() and j<s.size()){
            if(g[i]>s[j]){
                j++;// move on to the next size
            }
            else{
                i++,j++;// move on to the next child's greed and next size of the cookie
            }
        }
        return i;
    }
};