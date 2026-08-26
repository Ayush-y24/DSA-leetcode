class Solution {
public:
    int distributeCandies(vector<int>& c) {
       int n = c.size();
       unordered_set<int>s;
       for(int i=0; i<n; i++){
        s.insert(c[i]);
       } 
       int n2 = s.size();
       if(n2 <=n/2){
        return n2;
       }
       return n/2;
    }
};