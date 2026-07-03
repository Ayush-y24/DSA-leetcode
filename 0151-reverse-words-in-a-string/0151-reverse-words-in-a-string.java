class Solution {
    public String reverseWords(String s) {
      String words[] = s.trim().split(" ");
      ArrayList<String> list = new ArrayList<>(Arrays.asList(words));

      int n = list.size();
      String s2 = "";
      for(int i=n-1; i>=0; i--){
        if (list.get(i).length() == 0) continue;
        s2 = s2 + " " +list.get(i);
      }
      return s2.trim();

    }
}