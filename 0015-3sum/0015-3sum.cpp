class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int st=0; st<n; st++){
            if(st>0 && nums[st]==nums[st-1])continue;
            int j=st+1;
            int end=n-1;
            while(j<end){
                int sum=nums[st]+nums[j]+nums[end];
                if(sum==0){
                    ans.push_back({nums[st], nums[j], nums[end]});
                     while (j < end && nums[j] == nums[j + 1]) j++;
                    while (j < end && nums[end] == nums[end - 1]) end--;

                   
                    j++;
                    end--;
                } else if (sum < 0) {
                    j++;  
                } else {
                    end--;  
                }
            }
                
            }
            return ans;

            
        }
    
};