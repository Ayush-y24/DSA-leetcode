class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        int tcnt = 0;
        int cst = 0;
        sort(cost.begin(),cost.end());
        for(int i=n-1; i>=0; i--){
            tcnt++;
            if(tcnt%3 != 0){
                cst += cost[i];
            }
        }
        return cst;
        
    }
};