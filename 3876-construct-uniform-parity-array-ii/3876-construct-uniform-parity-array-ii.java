class Solution {
    public boolean uniformArray(int[] nums1) {
        int n= nums1.length;
        int count1 = 0;
        int count2 = 0;
       for(int i=0; i<n; i++){
        if(nums1[i]%2==0){
            count1++;
        }else{
            count2++;
        }
       }
       if(count1==n || count2==n){
        return true;
       }

       int smallest = Integer.MAX_VALUE;
       for(int i=0; i<n; i++){
        smallest = Math.min(smallest,nums1[i]);
       } 
       if(smallest % 2 == 0){
        return false;
       }else{
        return true;
       }
    }
}