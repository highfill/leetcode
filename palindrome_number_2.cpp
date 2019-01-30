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
        
        int reversed = 0;
        while (x > reversed)
        {
            reversed = 10 * reversed + x % 10;
            x /= 10;
        }
        
        if (x == reversed || x == reversed / 10)
        {
            return true;
        }
        
        return false;
            
    }
};
