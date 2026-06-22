class Solution {
public:
    int maxNumberOfBalloons(string text) {
    int n = text.length();
    unordered_map<char,int>m;
    for(int i=0; i<n; i++){
        char ch = text[i];
        if(ch =='b' || ch =='a' || ch =='l' || ch =='o' || ch =='n'){
            m[ch]++;
        }
    } 
    if(m.size()<5){
        return 0;
    }
    int ans = INT_MAX;
    for(auto pair : m){
        if(pair.first == 'l' || pair.first == 'o'){
            ans = min(ans,pair.second/2);
        }else{
            ans = min(ans,pair.second);
        }
    }
    return ans;
    }
};