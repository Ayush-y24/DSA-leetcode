class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x % 10 == 0 && x != 0)){
            return false;
        }

        int newnum = 0;

        while(x > newnum){
            int rem = x % 10;
            newnum = newnum * 10 + rem;
            x /= 10;
        }

        return (x == newnum || x == newnum / 10);
    }
};