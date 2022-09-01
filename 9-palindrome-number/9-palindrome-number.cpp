class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return 0;
        else
            return x == reverse(x);
    }
    int reverse(int x)
    {
        int rem=0;
        long long int num=0;
        while(x)
        {
            rem = x%10;
            num = (num*10)+rem;
            x = x/10;
        }
        return num;
    }
};