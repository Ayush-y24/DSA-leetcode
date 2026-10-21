class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        vector<int> v;
        int duplicate = -1;

        
        for (int i = 0; i < n; i++) {
            if (s.find(nums[i]) != s.end()) {
                duplicate = nums[i];
            }
            s.insert(nums[i]);
        }

        
        for (int i = 1; i <= n; i++) {
            if (s.find(i) == s.end()) {
                v.push_back(duplicate); 
                v.push_back(i);
                break;
            }
        }
        return v;
    }
};
