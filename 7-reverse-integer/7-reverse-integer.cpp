class Solution {
public:
    int reverse(int x) {
        int rev=0,rem;
        bool flag = false;
        if(x<0 && x>INT_MIN)
        {
            x=x*(-1);
            flag = true;
        }
        while(x>0)
        {
            rem = x%10;
            if(rev > ( INT_MAX -rem)/10)
                return 0;
            else
            {
                rev = rev*10 + rem;
                x = x/10;
            }
        }
        if(flag==false)
            return rev;
        else
            return -1*rev;
}};