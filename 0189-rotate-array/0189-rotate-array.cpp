class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>temp(nums.size());
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
           temp[(i+k)%n]=nums[i];
        }
        //copy temp into num vector
        nums=temp;
    }
};

/*
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // In case k is greater than n
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};*/