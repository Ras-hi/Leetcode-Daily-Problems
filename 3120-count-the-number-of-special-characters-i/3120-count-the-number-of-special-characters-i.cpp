class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<int>slower;
        set<int>supper;
        for(auto it : word){
            if(it>='a' && it<='z'){
                slower.insert(it-'a');
            }
            else{
                supper.insert(it-'A');
            }
        }
        int cnt=0;
        for(auto it :slower){
            if(supper.find(it) != supper.end()){
                cnt++;
            }
        }
        return cnt;
        
        
    }
};