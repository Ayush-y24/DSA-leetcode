class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        vector<vector<string>> res;

        for(int i = 0; i<strs.size(); i++){
            string key = strs[i];
            sort(key.begin(), key.end());
            m[key].push_back(strs[i]);
        }

        for(auto it : m){
            res.push_back(it.second);
        }
        return res;
    }
};