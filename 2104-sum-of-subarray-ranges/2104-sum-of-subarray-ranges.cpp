class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
    int n = nums.size();
    vector<int>nse(n,0);
    vector<int>psee(n,0);
    vector<int>nge(n,0);
    vector<int>pgee(n,0);
    stack<int>st;
    for(int i=n-1; i>=0; i--){
        while(!st.empty() && nums[st.top()]>=nums[i]){
            st.pop();
        }
        if(!st.empty() && nums[st.top()]<nums[i]){
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
        while(!st.empty() && nums[st.top()]>nums[i]){
            st.pop();
        }
        if(!st.empty() && nums[st.top()]<=nums[i]){
            psee[i] = st.top();
        }else{
            psee[i] = -1;
        }
        st.push(i);
    }  
    while(!st.empty()){
        st.pop();
    } 
    for(int i=n-1; i>=0; i--){
        while(!st.empty() && nums[st.top()]<=nums[i]){
            st.pop();
        }
        if(!st.empty() && nums[st.top()]>nums[i]){
            nge[i] = st.top();
        }else{
            nge[i] = n;
        }
        st.push(i);
    }  
    while(!st.empty()){
        st.pop();
    } 
    for(int i=0; i<n; i++){
        while(!st.empty() && nums[st.top()]<nums[i]){
            st.pop();
        }
        if(!st.empty() && nums[st.top()]>=nums[i]){
            pgee[i] = st.top();
        }else{
            pgee[i] = -1;
        }
        st.push(i);
    }  
    long long ans = 0;
    for(int i=0; i<n; i++){
        long long maxCnt = 1LL * (nge[i] - i) * (i - pgee[i]);
        long long minCnt = 1LL * (nse[i] - i) * (i - psee[i]);

        ans += 1LL * nums[i] * (maxCnt - minCnt);
    }
    return ans;
    }
};