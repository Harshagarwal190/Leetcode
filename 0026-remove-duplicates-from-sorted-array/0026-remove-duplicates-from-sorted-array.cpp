class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        if (nums.empty()) return 0; // handle edge case for empty vector

        int n = nums.size();
        int i = 0;

        for (int j = 1; j < n; j++) // start j from 1
        {
            if (nums[j] != nums[i])
            {
                i++;
                nums[i] = nums[j];
                
            }
        }
        return i + 1;
    }
};

