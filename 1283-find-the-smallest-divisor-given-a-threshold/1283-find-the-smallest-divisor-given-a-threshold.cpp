class Solution {
public:
    bool check(vector<int>& nums,int threshold,int n,int mid){
        int a = 0;
        for(int i=0; i<n; i++){
            a = a + (nums[i]+mid-1)/mid;
        }
        return a <= threshold ;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
       int n = nums.size();
       int l = 1;
       int r = *max_element(nums.begin(),nums.end());
       int ans = r;
       while(l<=r){
        int mid = l + (r-l)/2;
        if(check(nums,threshold,n,mid)){
            ans = min(ans,mid);
            r = mid -1;
        }else{
            l = mid + 1;
        }
       } 
       return ans;
    }
};