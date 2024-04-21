class Solution {
public:
    int numberOfSpecialChars(string s) {
        // set<int>slower;
        // set<int>supper;
        // for(auto it : word){
        //     if(it>='a' && it<='z'){
        //         slower.insert(it-'a');
        //     }
        //     else{
        //         supper.insert(it-'A');
        //     }
        // }
        // int cnt=0;
        // for(auto it :slower){
        //     if(supper.find(it) != slower.end()){
        //         cnt++;
        //     }
        // }
        // return cnt;
        
        set<int>s1;
        set<int>s2;
        for(auto i:s) {
            if(i>='a' && i<='z')
                s1.insert(i-'a');
            else
                s2.insert(i-'A');
        }
        int c=0;
        for(auto i:s1) {
            if(s2.find(i)!=s2.end())
                c++;
        }
        return c;
    }
};