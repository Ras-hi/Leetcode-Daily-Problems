class Solution {
public:
    int lengthOfLastWord(string s) {
        int size=s.size();
        int counter=0,flag=0;
        for(int i=size-1;i>=0;i--){
            if(s[i]==' '&& counter>0)break;
            if(s[i]!=' '){
                counter++;
            }
        }
        return counter;
    }
};