class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size();
    int counter = 0;

    // Traverse the string from the end
    for (int i = size - 1; i >= 0; i--) {
        // If we encounter a space and we've already counted some characters, break
        if (isspace(s[i]) && counter > 0)
            break;
        // If the character is not a space, increment counter
        if (!isspace(s[i]))
            counter++;
    }
    return counter;
    }
};
/*
     int size = s.size();
    int counter = 0;

    // Traverse the string from the end
    for (int i = size - 1; i >= 0; i--) {
        // If we encounter a space and we've already counted some characters, break
        if (isspace(s[i]) && counter > 0)
            break;
        // If the character is not a space, increment counter
        if (!isspace(s[i]))
            counter++;
    }
    return counter;
    
    
    isspace lies in the cctype header file and basically judges if there is a whitespace inplace of a char
*/


/*
Hello World
d-> cnt=1, then s[i]!=' ' l-> cnt=2 r->cnt=3 ,o->cnt=4 , w->cnt=5 
then s[i]==' ' && counter >0
so we break out of the loop and print cnt =5

*/