class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0;
        int rp=height.size()-1;
        int w=0;
        while(lp<=rp){
              int x=(rp-lp)*min(height[lp],height[rp]);
              w=max(w,x);
              if(height[lp]<=height[rp]){
                lp++;
              }
              else{
                rp--;
              }
        }
       return w; 
    }
};