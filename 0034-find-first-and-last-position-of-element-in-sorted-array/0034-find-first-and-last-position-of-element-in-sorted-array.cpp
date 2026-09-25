class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     vector<int> ans(2,-1);
     int n = nums.size();
     int l = 0;
     int r = n-1;
     int first= -1;
     int second= -1;
     while(l<=r){
        int mid = l + (r-l)/2;
        if(nums[mid] == target){
            first = mid;
            r = mid -1;

        }else if(nums[mid]>target){
            r = mid -1;
        }else{
            l = mid + 1;
        }

     }
     l=0;
     r=n-1;
     while(l<=r){
        int mid = l + (r-l)/2;
        if(nums[mid] == target){
            second = mid;
            l = mid+1;

        }else if(nums[mid]>target){
            r = mid -1;
        }else{
            l = mid + 1;
        }
     }
     ans[0] = first;
     ans[1] = second;

     return ans;  
    }
};