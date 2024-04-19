class Solution {
public:
    bool areNumbersAscending(string s) {
            int prev = 0, n = s.size();
            for(int i = 0; i < n; i++) {
                if(isdigit(s[i])) {
                    int num = 0;
                    while(isdigit(s[i]))
                    num = (num * 10) + (s[i++] - '0');

                    if(prev != 0 and prev >= num) 
                        return false;
                    else prev = num;
                }
            }

            return true;
    }
};