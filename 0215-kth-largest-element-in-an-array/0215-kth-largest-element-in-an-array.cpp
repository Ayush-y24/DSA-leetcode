class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>>q;

        for(int val : nums){
            q.push(val);
        }

        for(int i=0; i<k-1; i++){
            q.pop();
        }
        return q.top();
    }
};