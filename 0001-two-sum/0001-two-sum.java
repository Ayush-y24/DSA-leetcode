class Solution {
    public int[] twoSum(int[] nums, int target) {
      int n = nums.length;
      HashMap<Integer,Integer>map = new HashMap<>();  
      int[] ans = new int[2];
      for(int i=0; i<n; i++){
        int x = nums[i];
        int y = target - x;
        if(map.containsKey(y) ){
           ans[0] = i;
           ans[1] = map.get(y);
           return ans;
        }
         map.put(nums[i],i);
      }
      return ans;
    }
}