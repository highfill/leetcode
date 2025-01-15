class Solution {
public:
    bool isPalindrome(int x) 
    {
        if (x < 0)
        {
            return false;
        }
        else if (x < 10)
        {
            return true;
        }

        std::vector<int> digits;

        int temp = x;
        while (temp > 0)    
        {
            digits.push_back(temp % 10);
            temp = (temp / 10);
        }

        for (int i = 0; i < digits.size(); ++i)
        {
            if (digits[i] != digits[digits.size() - i - 1])
            {
                return false;
            }
        }

        return true;
    }
};
