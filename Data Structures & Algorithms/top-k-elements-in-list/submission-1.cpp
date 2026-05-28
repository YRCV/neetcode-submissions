class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // brute force: create freq hashmap, construct on vector<pair<int,int>>
        // sort pair from highest to lowest freq (.second val), return first k elems
        unordered_map<int, int> freqMap;
        for (int num : nums){ freqMap[num]++; }
        
        vector<pair<int,int>> freq(freqMap.begin(), freqMap.end());
        sort(freq.begin(), freq.end(), [](const pair<int,int>& left, const pair<int,int>& right){
            return left.second > right.second; // highest to lowest freq
        });

        vector<int> answer;
        for (int j = 0; j < k; j++){ answer.push_back(freq[j].first); }

        return answer;
    }
};
