class Solution {
    public int lengthOfLongestSubstring(String s) {

       int n = s.length();
       HashMap<Character,Integer> map = new HashMap<>();
       int l =0;
       int r = 0;
       int ans = 0;

       while(r<n){
        char ch = s.charAt(r);
        map.put(ch,map.getOrDefault(ch,0)+1);
        
        int length = r-l+1;
        if(length>map.size()){
            char left = s.charAt(l);
            map.put(left,map.get(left)-1);
            if(map.get(left)==0){
                map.remove(left);
            }
            l++;
        }
        
        if(map.size()==length){
            ans = Math.max(ans,length);
        }
        r++;
       } 
       return ans;
    }
}
    
