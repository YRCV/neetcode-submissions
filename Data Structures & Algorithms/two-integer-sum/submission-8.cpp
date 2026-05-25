class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // create hash map
        // return index when diff=target-nums[i]
        // single pass, check as i add to the map
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++){
            int cur = nums[i];
            int diff = target - cur;
            
            if (mp.find(diff) != mp.end() && i != mp[diff]){
                int index = mp[diff];
                return {min(i, index), max(i, index)};
            }

            mp[cur] = i;
        }

        return {-1,-1};
    }
};
