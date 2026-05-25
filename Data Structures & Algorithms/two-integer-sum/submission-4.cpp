class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // sort and use two pointers
        vector<pair<int,int>> duo;
        for (int i = 0; i < nums.size(); i++){
            duo.push_back({nums[i], i});
        }

        sort(duo.begin(), duo.end());
        
        int right = nums.size() - 1;
        int left = 0;

        while(left < right){
            int sum = duo[left].first + duo[right].first;
            if (sum == target){
                return {min(duo[left].second, duo[right].second), max(duo[left].second, duo[right].second)};
            } else if (sum < target){
                left++;
                continue;
            } else{
                right--;
                continue;
            }
        }
        return {left, right};
    }
};
