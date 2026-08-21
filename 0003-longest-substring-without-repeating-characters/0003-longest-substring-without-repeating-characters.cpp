class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int>m;
        int j =0;
        int max_length = 0;
        int length = 0;

        for(int i = 0; i < s.size(); i++){
            if(m.find(s[i]) != m.end()){
                j = max(j, m[s[i]] + 1);
            }

            m[s[i]] = i;
            length = i - j + 1;
            if(length > max_length){
                max_length = length;
            }

            
        }
        return max_length;
    }
};