class Solution {
    public int strStr(String haystack, String needle) {
        int n = haystack.length();
        int m = needle.length();

        int l=0;
        int r=m-1;

        while((r+1)<=n){
            if (haystack.substring(l,r+1).equals(needle)){
                return l;
            }
            l++;
            r++;
        }
        return -1;
    }
}