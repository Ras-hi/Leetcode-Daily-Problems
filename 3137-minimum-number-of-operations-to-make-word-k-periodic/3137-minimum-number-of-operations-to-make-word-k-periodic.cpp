class Solution {
public:
    int minimumOperationsToMakeKPeriodic(string word, int k) {
        int maxofAllFreq=0;
        unordered_map<string,int>m;
        for(int i=0;i<word.size();i+=k){
            string sub =word.substr(i,k);
            m[sub]++;
        }
        for(auto p: m){
            maxofAllFreq= max(maxofAllFreq,p.second);
        }
        return word.length()/k-maxofAllFreq;
    }
};