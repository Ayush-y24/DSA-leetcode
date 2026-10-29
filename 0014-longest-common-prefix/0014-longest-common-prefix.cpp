class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];

        for(int i =0; i<strs.size(); i++){
            string word = strs[i];
            int j =0;
            int k = 0; 
            string new_pre = "";
            while(j<prefix.size() && k <word.size()){
                if(prefix[j] != word[k]){
                    break;
                }else{
                    new_pre += prefix[j];
                }
                j++;
                k++;
            }
            prefix = new_pre;
        }
        return prefix;
        
    }
};