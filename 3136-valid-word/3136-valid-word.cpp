class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3) return false;
        int vowels =0,cons=0;
        for(char c:word){
            if(c>='0' && c<='9')continue;
            if((c>='a'&& c<='z')|| (c>='A' && c<='Z')){
                if(c>='A' && c<='Z')c =c-'A'+'a';
                if(c=='a'|| c=='e' || c=='i'|| c=='o' ||c=='u')vowels++;
                else cons++;
            }
            else{
                return false;
            }
        }
        return vowels &&cons;
    }
};