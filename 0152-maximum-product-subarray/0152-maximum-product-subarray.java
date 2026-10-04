class Solution {
    public int maxProduct(int[] nums) {
        int n = nums.length;
        int minpro = nums[0];
        int maxpro = nums[0];

        int ans = nums[0];

        for(int i=1; i<n; i++){
            int temp = minpro;
            minpro = Math.min(nums[i],Math.min(minpro*nums[i],maxpro*nums[i]));
             maxpro = Math.max(nums[i],Math.max(temp*nums[i],maxpro*nums[i]));
              ans = Math.max(ans,maxpro);
            //  if(nums[i]==0){
            //     minpro = 1;
            //     maxpro = 1;
            //  }
        }
    return ans;

    }
}