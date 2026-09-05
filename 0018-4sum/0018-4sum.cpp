class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size() < 4) return {};

        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for(int i = 0; i<nums.size()-3; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;

            for(int a = i+1; a<nums.size()-2; a++){
                if(a > i+1 && nums[a] == nums[a-1]) continue;

                int b = a+1;
                int c = nums.size()-1;

                while(b < c){
                    long long sum = 1LL * nums[i] + nums[a] + nums[b] + nums[c];

                    if(sum == target){
                        ans.push_back({nums[i], nums[a], nums[b], nums[c]});

                        while(b < c && nums[b] == nums[b + 1]) b++;
                        while(b < c && nums[c] == nums[c - 1]) c--;
                        
                        b++;
                        c--;
                    }
                    else if(sum > target){
                        c--;
                    }else{
                        b++;
                    }
                }
                
            }
            
        }
        return ans;
    }
};