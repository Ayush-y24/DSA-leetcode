class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n = words.size();
        vector<string>ans;
        unordered_map<string,int>m;
       for (const string &word : words) {
        m[word]++;
    }

    
    vector<pair<string, int>> vec(m.begin(), m.end());

    
    sort(vec.begin(), vec.end(), [](const pair<string, int> &a, const pair<string, int> &b) {
        return a.second > b.second || (a.second == b.second && a.first < b.first);  
    });
    for(auto &pair : vec){
        if(k>0){
            ans.push_back(pair.first);
            k--;
        }
    }
    return ans;
    }
};