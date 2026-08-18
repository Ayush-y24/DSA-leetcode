class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
      int n = nums.size();
      int maxm = -1;
      map<int, int, greater<int>> m;
      for(int i=0; i<n; i++){
        maxm = max(maxm,nums[i]);
        m[nums[i]]++;
      }  
      if(k == 1){
        for(auto x : m){
            if(x.second == 1){
                return x.first;
            }
        }
        return -1;
      }

      if(k == n){
        return maxm;
      }

      if(m[nums[0]] == 1 && m[nums[n-1]] == 1){
        return max(nums[0],nums[n-1]);
      }else if(m[nums[0]] == 1 && m[nums[n-1]] != 1){
        return nums[0];
      }else if(m[nums[0]] != 1 && m[nums[n-1]] == 1){
        return nums[n-1];
      }else{
        return -1;
      }

  
    }
};