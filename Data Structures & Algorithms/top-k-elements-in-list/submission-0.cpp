class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // brute force: vector<int, int>, pass by array and add to freq
        // sort vector on second index and output the top k
        unordered_map<int, int> freqMap;
        for (int num : nums){
            freqMap[num]++;
        }
        // cout << "1. freq map created\n";
        vector<pair<int,int>> freq(freqMap.begin(), freqMap.end());
        // cout << "2. vector pair created\n";
        // sort the freq vector, highest to lowest
        sort(freq.begin(), freq.end(), [](const pair<int,int>& left, const pair<int,int>& right){
            return left.second > right.second;
        });
        // cout << "3. vector pair sorted\n";

        // return the last k elements
        vector<int> answer;
        // cout << "4. answer vector created\n";
        for (int j = 0; j < k; j++){
            answer.push_back(freq[j].first);
        }
        // cout << "5. top k appended\n";
        return answer;
    }
};
