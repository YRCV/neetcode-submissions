class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // improved solution: single pass with set
        // if the number has been seen before, return true
        // O(N) time, and O(N) space
        unordered_set<int> exists;
        for (int num : nums){
            if (exists.count(num) == 1){
                return true;
            }

            exists.insert(num);
        }

        return false;
    }
};