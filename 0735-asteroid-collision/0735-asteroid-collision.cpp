class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        int n = a.size();
        stack<int>st;
        for(int i=0; i<n; i++){
           bool destroyed = false;
           while(!st.empty() && st.top()>0 && a[i]<0){
                if(abs(a[i])>st.top()){
                    st.pop();
                }else if(abs(a[i])==st.top()){
                    st.pop();
                    destroyed = true;
                    break;
                }
                else{
                    destroyed = true;
                    break;
                }
           }
            
        if(destroyed == false){
           st.push(a[i]);
        }
            
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};