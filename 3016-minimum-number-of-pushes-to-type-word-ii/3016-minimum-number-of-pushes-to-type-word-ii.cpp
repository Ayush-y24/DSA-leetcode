class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length();
        vector<int>v(26,0);
        for(int i=0; i<n; i++){
           v[word[i]-'a']++;
        }
        sort(v.begin(),v.end());
        int ans = 0;
        int button = 0;
        for(int i=25; i>=0; i--){
            if(button<8){
                ans = ans + v[i];
                button++;
            }else if(button>=8 && button<16){
                ans = ans + 2*v[i];
                button++;
            }else if(button>=16 && button<24){
                ans = ans + 3*v[i];
                button++;
            }else{
                ans = ans + 4*v[i];
                button++;
            }
        }
        return ans;
        
    }
};