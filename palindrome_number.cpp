class Solution
{

    public:
    
    // Iterate from the "outside" digits, on opposite ends of the number, symmetrically in towards the middle,
    // comparing each pair of digits for equality
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        else if (x == 0)
        {
            return true;
        }
        
        int numDigits = std::floor(std::log10(x) + 1);
 
        for (int i = 0; i < numDigits / 2; ++i)
        {
            // Get the right outside digit
            int rightDecimalPlace = std::pow(10, i);
            int rightDigit = (x / rightDecimalPlace) % 10;

            // Get the left outside digit
            int leftDecimalPlace = std::pow(10, numDigits - i - 1);
            int leftDigit = (x / leftDecimalPlace) % 10;
            
            if (rightDigit != leftDigit)
            {
                return false;
            }
        }
        
        return true;
    }
    
};
