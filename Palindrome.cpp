class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0;
        int digit;
        int origin = x; 
        while(x>0) {
           digit = x%10;
            rev = rev*10 + digit;
            x = x/10;   
        }
        if (origin==rev) {
            return true;
        }
        else {
            return false;
        }
    }
};