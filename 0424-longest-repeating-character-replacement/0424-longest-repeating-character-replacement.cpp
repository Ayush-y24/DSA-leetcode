class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        vector<int>v(26,0);
        int maxf = 0;
        int l =0;
        int r =0;
        int ans =-1;
        while(r<n){
            v[s[r]-'A']++;
            maxf = max(maxf,v[s[r]-'A']);
            if(((r-l+1)-maxf)>k){
                v[s[l]-'A']--;
                l++;
            }
            ans = max(ans,r-l+1);
            r++;
        }

    return ans;
        
    }
};