class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // brute force: check all pair combinations
        // ideas: create a hash map for all numbers
        // diff=target-i, then iterate through the array and check if diff exists
        // since duplicates exist this would require the map to be <int, vector<int>>, as it may need to store two indices
        int i = 0;
        int index = 1;
        for (i; i < nums.size(); i++){
            int diff = target - nums[i];
            auto it = find(nums.begin(), nums.end(), diff);
            if (it != nums.end()){
                int index = it - nums.begin();
                if (index != i){
                    vector<int> ans = {i, index};
                    sort(ans.begin(), ans.end());
                    return ans;
                }
            }else {
                continue;
            }
        }
        return {i,index};
    }
};
