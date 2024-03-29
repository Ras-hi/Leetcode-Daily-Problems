class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
    unordered_map<int, int> numMap; // Map to store the index of each number

    // Populate the map with numbers and their indices
    for (int i = 0; i < nums.size(); ++i) {
        numMap[nums[i]] = i;
    }

    // Iterate through the array to find the pair
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        // Check if the complement exists in the map and it is not the same element as nums[i]
        if (numMap.find(complement) != numMap.end() && numMap[complement] != i) {
            ans.push_back(i);
            ans.push_back(numMap[complement]);
            break; // We found the pair, so exit the loop
        }
    }

    return ans;
    }
};