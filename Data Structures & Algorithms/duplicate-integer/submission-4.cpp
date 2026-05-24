class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    // efficient solution: unordered_map
    // vector<int, int>, go through array and collect frequency of keys
    // check if any key as a frequency != 1, return true
    // O(1) avg time for hash map, O(N) space BUT for loop is O(N) time

    unordered_map<int, int> freq;

    for (int num : nums){
        freq[num]++;
    }

    for (auto& pair : freq){
        if (pair.second != 1){
            return true;
        }
    }

    return false;
    }
};