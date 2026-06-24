class Solution {
public:
    bool check(vector<int>& piles,int mid,int h,int n){
        for(int i=0; i<n; i++){
            h = h - ceil((double)piles[i]/mid);
        }
        if(h>=0){
            return true;
        }
        return false;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
       int n = piles.size();
       int l = 1;
       int r = *max_element(piles.begin(),piles.end());
       int ans = r;
       while(l<=r){
        int mid = l + (r-l)/2;
        if(check(piles,mid,h,n)){
            ans = min(ans,mid);
            r = mid -1;
        }else{
            l = mid + 1;
        }
       } 
       return ans;
    }
};