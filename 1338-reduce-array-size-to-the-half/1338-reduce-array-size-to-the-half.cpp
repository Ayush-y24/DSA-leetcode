class Solution {
public:
    int minSetSize(vector<int>& arr) {
      int n = arr.size();
      map<int,int>m;
      for(int i=0; i<n; i++){
         m[arr[i]]++;
      }  
      priority_queue<int>q;

      for(auto pair : m){
        q.push(pair.second);
      }
      int sum =0;
      int count = 0;
      while(!q.empty() && sum<n/2){
        sum = sum + q.top();
        q.pop();
        count++;
      }
       return count;
    

    }
};