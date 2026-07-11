class Solution {
public:
    int atmost(vector<int>& nums,int k){
        int n = nums.size();
        int l = 0;
        int r = 0;
        int count = 0;
        int ans = 0;
        while(r<n){
            if(nums[r]%2 == 1){
                count++;
            }
            while(count > k){
                if(nums[l]%2 == 1){
                    count--;
                }
                l++;
            }
            ans = ans + r-l+1;
            r++;
            
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
};