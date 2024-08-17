

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
//another approach for this solution
/*class Solution
{
public:
    bool check(vector<int>& nums)
    {
        int count = 0;
        int n = nums.size();
        for(i=1;i<n;i++)
        {
            if(arr[i-1]>arr[i])
            {
                count++;
            }
        }
        if(nums[n-1]>nums[0])
        {
            count++;
        }
        return count<=1;
    }
};*/