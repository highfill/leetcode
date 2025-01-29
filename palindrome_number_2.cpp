class Solution
{

    public:
    
    // Starting with x, build the reversed integer by repeatedly "pushing" the least significant digit into
    // the reversed integer, each time, dividing the running forward integer and multiplying the running revsersed
    // numbers by 10.
    bool isPalindrome(int x)
    {   
        if (x < 0 || x != 0 && x % 10 == 0)
            return false;

        long int forward = x;
        long int reversed = 0;
        while (x > 0)
        {
            reversed = 10 * reversed + forward % 10;
            forward /= 10;
        }
        
        if ((long int)x == reversed)
        {
            return true;
        }
        
        return false;
    }
};
