class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // brute force: sort array
        // make for loop starting at i=1, ends at i<[nums.size()-1]
        // check nums[i-1] != nums[i] && nums[i] != nums[i+1]
        // if ever false, return true
        // O(N) time and O(1) space for loop
        // BUT O(N logN) time and O(logN) space for ::sort

    sort(nums.begin(), nums.end());
    
    if (nums.size() == 0){
        return false;
    }

    for (int i = 1; i < nums.size(); i++){
        if (nums[i-1] == nums[i]){
            return true;
        }
    }

    return false;
    }
};