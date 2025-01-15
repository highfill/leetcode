class Solution
{

    public:
    
    
    // Iterate through each element of the vector. Store previously seen values in a hashmap that maps values to
    // their index. For each new int "current" in the vector, if (target - current) is contained in the map
    // of previously seen integers, then we have found the pair that adds to target. Otherwise, add the current
    // value to the map as the key and use its index for the mapped value.
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> toReturn(2);
        std::unordered_map<int, int> closedSet;
        
        for (int i = 0; i < nums.size(); ++i)
        {
            int current = nums[i];
            auto itr = closedSet.find(target - current);
            
            if (itr == closedSet.end())
            {
                // Could not find another value from the "closed set" that adds together with this current number to equal "target". Add this number to "closedSet":
                closedSet[current] = i;
            }
            else
            {
                // Found the previously seen integer that adds with the current to equal the target integer:

                toReturn[0] = itr->second;
                toReturn[1] = i;
                
                return toReturn;
            }
        }
        
        return toReturn;
    }

};
