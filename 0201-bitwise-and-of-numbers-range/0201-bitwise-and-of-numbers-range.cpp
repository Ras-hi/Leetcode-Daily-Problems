class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shift = 0; // Count the number of bits shifted
        // Find the common prefix of left and right
        while (left != right) {
            left >>= 1; // Right shift left
            right >>= 1; // Right shift right
            shift++; // Increment the number of bits shifted
        }
        return left << shift; 
    }
};