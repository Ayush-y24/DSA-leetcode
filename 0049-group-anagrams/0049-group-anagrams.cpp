class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>>m;
        vector<vector<string>>ans;
        for(int i=0; i<n; i++){
            string sorted_str = strs[i];  
            sort(sorted_str.begin(), sorted_str.end());  
            
            m[sorted_str].push_back(strs[i]); 
        }
        
    
    for ( auto& group : m) {
        ans.push_back(group.second);
    }
   return ans;

    }
};