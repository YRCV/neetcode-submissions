class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // cleanest single pass solution
        // no need to sort return
        // int i must always be greater than mp[diff] byt he time im checking
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if (mp.contains(diff)){
                return {mp[diff], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
