class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
        int n = nums.size();
        int maxm = INT_MIN;
        int minm = INT_MAX;
        int maxi = -1;
        int mini = -1;
        for(int i=0; i<n; i++){
           if(nums[i] > maxm){
            maxm = nums[i];
            maxi = i;
           }
           if(nums[i] < minm){
            minm = nums[i];
            mini = i;
           }
        }
        int d1 = max(maxi,mini) + 1;
        int d2 = n - min(maxi,mini);
        int d3 = min(maxi,mini) + 1 + n - max(maxi,mini);
        return min(d1,min(d2,d3)); 
    }
};