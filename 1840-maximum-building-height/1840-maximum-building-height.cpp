class Solution {
public:
    int maxBuilding(int n, vector<vector<int>>& restrictions) {
        if (restrictions.empty()) {
              return n - 1;
             }
        restrictions.push_back({1, 0});

        int n1 = restrictions.size();
       

        sort(restrictions.begin(), restrictions.end());
        if(restrictions[n1-1][0] != n){
            restrictions.push_back({n,n-1});
            n1 = n1+1;
        }

        for (int i = 0; i < n1 - 1; i++) {
            int d = restrictions[i + 1][0] - restrictions[i][0];
            restrictions[i + 1][1] = min(
                restrictions[i + 1][1],
                restrictions[i][1] + d
            );
        }

        for (int i = n1 - 1; i > 0; i--) {
            int d = abs(restrictions[i][0] - restrictions[i - 1][0]);
            restrictions[i - 1][1] = min(
                restrictions[i - 1][1],
                restrictions[i][1] + d
            );
        }

        int ans = 0;

        for (int i = 0; i < n1 - 1; i++) {
            int d = restrictions[i + 1][0] - restrictions[i][0];
            int h1 = restrictions[i][1];
            int h2 = restrictions[i + 1][1];

            ans = max(ans, (d + h1 + h2) / 2);
        }

        return ans;
    }
};