class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // brute force
        int totalMult = 1;
        int nonZeroMult = 0;
        for (int num : nums){
            if (num == 0){
                nonZeroMult = nonZeroMult;
                totalMult = 0;
            } else{
                if (nonZeroMult == 0){
                    nonZeroMult = num;
                } else{
                    nonZeroMult = nonZeroMult * num;
                }
                totalMult = totalMult * num;
            }
        }
        if (count(nums.begin(), nums.end(), 0) > 1){
            nonZeroMult = 0;
        }
        vector<int> ans;

        int result;
        for (int num : nums){
            if (num != 0){
                result = totalMult / num;
            } else {
                result = nonZeroMult;
            }
            ans.push_back(result);
        }

        return ans;
    }
};
