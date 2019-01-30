class Solution {
public:
    vector<int> plusOne(vector<int>& digits)
    {
        if (digits.size() == 1 && digits[0] == 0)
        {
            return { 1 };
        }
        
        int digitIndex = digits.size() - 1;
        bool carry = false;
        
        // For each digit, starting with the least significant, add one if the digit is 0-8.
        // If the digit is "9", set the digit to "0" and "carry the one".
        do
        {
            if (digits[digitIndex] < 9)
            {
                ++digits[digitIndex];
                carry = false;
            }
            else
            {
                digits[digitIndex] = 0;
                if (digitIndex != 0)
                {
                    // Carry the "1"
                    --digitIndex;
                    carry = true;
                }
                else
                {
                    // Insert "1" at the first (most significant digit)
                    const int one = 1;
                    digits.insert(digits.begin(), one);
                    carry = false;
                }
            }
        } while (carry && digitIndex >= 0);
        
        return digits;
    }
};
