class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
       int n = nums.size();
       vector<int>ans(n,0);
       vector<int>pref(n,0);
       vector<int>suff(n,0);
       pref[0]=0;
       suff[n-1]=0;
       for(int i=1; i<n; i++){
        pref[i]=pref[i-1]+nums[i-1];
       } 
       for(int i=n-2; i>=0; i--){
        suff[i]=suff[i+1]+nums[i+1];
       }
       for(int i=0; i<n; i++){
        ans[i]=abs(pref[i]-suff[i]);
       }
       return ans;
    }
};