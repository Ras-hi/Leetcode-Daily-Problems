class Solution {
public:
    string compressedString(string word) {
        string comp="";
        int i=0;
        int n=word.size();
        while(i<n){
            int count =0;
            char c= word[i];
            while(i<n && word[i]==c && count <9){
                ++i;
                ++count ;
            }
            comp+=to_string(count)+c;
        }
        return comp;
    }
};