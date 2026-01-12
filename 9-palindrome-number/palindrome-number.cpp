class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int org = x;
        int n = x;
        long long sum = 0;
        while(n!=0){
            sum  = sum*10 + n%10;
            n = n/10;
        }

        return org == sum;

    }
};