class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();

        int sum = nums[0];
        set<int> st;

        // Store all elements
        for (int x : nums) {
            st.insert(x);
        }

        // Find longest sequential prefix
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            } else {
                break;
            }
        }

        // Find smallest missing integer >= sum
        while (st.count(sum)) {
            sum++;
        }

        return sum;
    }
};