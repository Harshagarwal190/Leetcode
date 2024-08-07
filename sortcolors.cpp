#include <iostream>
#include <vector>

class Solution {
public:
    void swap(std::vector<int>& nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    void sortColors(std::vector<int>& nums) {
        int start = 0;
        int mid = 0;
        int end = nums.size() - 1;

        while (mid <= end) {
            if (nums[mid] == 0) {
                swap(nums, mid, start);
                start++;
                mid++;
            } else if (nums[mid] == 2) {
                swap(nums, mid, end);
                end--;
            } else {
                mid++;
            }
        }
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {2, 0, 2, 1, 1, 0};
    solution.sortColors(nums);

    for (int num : nums) {
        std::cout << num << " ";
    }

    return 0;
}
