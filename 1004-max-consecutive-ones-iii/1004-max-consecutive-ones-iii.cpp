class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0 ;
        int r = 0;
        int zcnt = 0;
        int ans = -1;
        while(r<n){
            if(nums[r] == 0){
                zcnt++;
            }
            if(zcnt > k){
                if(nums[l] == 0){
                    zcnt--;
                }
                l++;
            }
            if(zcnt <= k){
                ans = max(ans,r-l+1);
            }
            r++;

        }
        return ans;

        
    }
};