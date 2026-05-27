class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // create a duplicate vector of strings
        // iterate through each eleemnt and sort()
        // add sorted element as a key to a hash map
        // map.second == vector<string>, return the strings for final
        vector<string> dupe = strs;
        unordered_map<string, vector<string>> seen;

        for (int i = 0; i < dupe.size(); i++){
            sort(dupe[i].begin(), dupe[i].end());
            seen[dupe[i]].push_back(strs[i]);
        }

        vector<vector<string>> final;
        for (const auto& [key, val] : seen){
            final.push_back(val);
        }

        return final;
    }
};
