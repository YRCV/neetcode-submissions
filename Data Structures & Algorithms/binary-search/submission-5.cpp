class Solution {
public:
    int search(vector<int>& nums, int target) {
        // since the numbers are sorted,
        // we can define start, end,and mid = start + end / 2
        // in c++, division between 2 ints returns only in, no need for floored
        int start = 0;
        int end = nums.size() - 1;
        int mid = (start + end) / 2;
        while (start <= end){
            mid = (start + end) / 2;
            if (nums[mid] == target){
                return mid;
            } else if (nums[mid] < target){
                start = mid + 1;
            } else{
                end = mid - 1;
            }
        }
        return -1;
    }
};
