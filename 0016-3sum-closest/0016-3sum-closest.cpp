class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
      int closest=0;
      int mdiff=INT_MAX;
      sort(nums.begin(),nums.end());
         for(int i=0; i<n-2; i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==target){
                    return sum;
                }
                if(sum<target){
                    j++;
                }
                else{
                    k--;
                }
                int diff=abs(sum-target);
                if(diff<mdiff){
                    mdiff=diff;
                    closest=sum;
                }
            }
         }
      
    return closest;
    }
};