class Solution {
public:
    bool isPalindrome(int x) {
        if(x < INT_MIN || x > INT_MAX){
            return false;

        }
        int last;
        long long rev=0;
        long long temp = x;
        while(temp!=0){
            if(temp<0){
                temp = -temp;
            }
            last = temp % 10;
            temp = temp /10;
        
            rev = rev * 10 + last;
        }
        if(rev == x){
            return true;
        }
        else{
            return false;
        }
    }
};