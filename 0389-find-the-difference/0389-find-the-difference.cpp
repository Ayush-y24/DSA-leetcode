class Solution {
public:
    char findTheDifference(string s, string t) {
      int n1 = s.length();
      int n2 = t.length();
      unordered_map<char,int>m;
      unordered_map<char,int>m2;
      for(int i=0; i<n1; i++){
        m[s[i]]++;
      } 
      for(int i=0; i<n2; i++){
        m2[t[i]]++;
      }  
      for(int i=0; i<n2; i++){
        if(m.find(t[i])==m.end() || m[t[i]]!=m2[t[i]]){
            return t[i];
        }
      }
      return -1;
    }
};