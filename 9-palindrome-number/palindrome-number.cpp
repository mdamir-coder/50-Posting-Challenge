class Solution {
public:
    bool isPalindrome(int x) {
        int inputCopy = x;
        long rev = 0;
        while(x!=0){
            rev = rev*10 + x%10;
            x/=10;
        }
        //if(rev > INT_MAX || rev< INT_MIN) return 0;
        if (rev == inputCopy && inputCopy>=0){
            return true;
        }
        else{
            return false;
        }
        
    }
};