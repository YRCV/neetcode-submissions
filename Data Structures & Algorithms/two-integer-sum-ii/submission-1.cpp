class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // if righjt > targter right--
        int left = 0;
        int right = numbers.size() - 1;
        while (left < right){
            if (numbers[left] + numbers[right] == target){
                return {left + 1, right + 1};
            } else if (numbers[left] < target - numbers[right]){
                left++;
                continue;
            } else if (numbers[right] > target - numbers[left]){
                right--;
            }
        }
        return {-1, -1};
    }
};
