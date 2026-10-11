class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
     int n = people.size();
     int limidx;
     int boat = 0;
     sort(people.begin(),people.end());
     for(int i =0; i<n; i++){
        if(people[i]>=limit){
            limidx=i;
            break;
        }
     }
     int l = 0;
     int r = limidx-1;
     while(l<=r){
        if((people[l]+people[r])<=limit){
            boat++;
            l++;
            r--;
        }
        else{
            r--;
            boat++;
        }
     } 
     boat = boat + (n-limidx);

    return boat;
    }
};