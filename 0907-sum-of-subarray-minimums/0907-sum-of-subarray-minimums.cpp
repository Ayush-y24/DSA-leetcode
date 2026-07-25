class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
     int n = arr.size();
     vector<int>nse(n,0);
     vector<int>psee(n,0); 
     stack<int>st;
     for(int i=n-1; i>=0; i--){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(!st.empty() && arr[st.top()]<arr[i]){
            nse[i] = st.top();
        }else{
            nse[i] = n;
        }
        st.push(i);
     }
     while(!st.empty()){
        st.pop();
     }
     for(int i=0; i<n; i++){
        while(!st.empty() && arr[st.top()]>arr[i]){
            st.pop();
        }
        if(!st.empty() && arr[st.top()]<=arr[i]){
            psee[i] = st.top();
        }else{
            psee[i] = -1;
        }
        st.push(i);
     }
     int ans = 0;
     const int MOD = 1e9 + 7;
     for(int i=0; i<n; i++){
        ans = (ans + (1LL*(nse[i]-i)*(i-psee[i])*arr[i])) % MOD;
     }
     return ans;

    }
};