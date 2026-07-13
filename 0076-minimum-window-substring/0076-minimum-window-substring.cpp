/*One-line intuition

v[] is the remaining grocery list:
Positive = still need to buy,
Zero = bought exactly enough,
Negative = bought extra.
Expand the window to buy everything, then shrink it by returning unnecessary items until you're missing something again.*/

class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.length();
        int n = t.length();
        vector<int>v(256,0);
        int l = 0;
        int r = 0;
        int minlen = INT_MAX;
        int sidx = -1;
        int count = 0;
        for(int i = 0; i<n; i++){
            v[t[i]]++;
        }
        while(r < m){
            if(v[s[r]] > 0){
                count++;
            }
            v[s[r]]--;
        while(count == n){
           if(r-l+1 < minlen){
             minlen = r-l+1;
             sidx = l;
            }
            v[s[l]]++;
            if(v[s[l]] > 0){
                count--;
            }
            l++;
        }
        r++;

        }
        return sidx==-1?"":s.substr(sidx,minlen);
    }
};