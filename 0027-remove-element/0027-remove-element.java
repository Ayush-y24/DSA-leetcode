class Solution {
    public int removeElement(int[] nums, int val) {
        int n = nums.length;
        if(n==1){
            if(val == nums[0]){
                return 0;
            }else{
                return 1;
            }
        }
        int l = 0;
        int r = n-1;
        while(l<=r){
            while( r>=l && nums[r]==val){
                r--;
            }
            if(r<l) break;
        if(nums[l]==val){
            
            int temp = nums[l];
            nums[l] = nums[r];
            nums[r] = temp;
            r--;
        }
           l++;
        }
        return r+1;
    }
}