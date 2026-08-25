class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        set<int> st;
        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }
        int k1 = k;
         while (st.find(k1) != st.end()) {
            k1 = k1 + k;
        }

        return k1;
    }
};