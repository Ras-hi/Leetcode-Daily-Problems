class Solution {
public:
    string compressedString(string word) {
        string comp;
        int i = 0;
        int n = word.length();

        while (i < n) {
            char c = word[i];
            int count = 0;

            // Count the maximum number of times c repeats, up to 9 times
            while (i < n && word[i] == c && count < 9) {
                ++i;
                ++count;
            }

            // Append the count and the character to comp
            comp += to_string(count) + c;
        }

        return comp;
    }
};