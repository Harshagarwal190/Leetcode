

class Solution
{
public:
    bool check(vector<int>& nums)
    {
        int count = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > nums[(i + 1) % n])
            {
                count++;
            }
        }
        
        // The array is considered rotated sorted if there is at most one such point.
        return count <= 1;
    }
};
