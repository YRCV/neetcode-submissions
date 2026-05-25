class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // create has map and then pass by each number
        // return index when diff=target-nums[i], two pass
        unordered_map<int, int> numbers;

        for (int i = 0; i < nums.size(); i++){
            numbers[nums[i]] = i;
        }

        for (int j = 0; j < nums.size(); j++){
            int diff = target - nums[j];
            if (numbers.find(diff) != numbers.end() && j != numbers[diff]){
                int index = numbers[diff];
                return{min(j,index), max(j,index)};
            }
        }
        return{0,1};
    }
};
