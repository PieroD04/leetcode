#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        // normalize k value to not exceed vector size while maintaining necessary rotations
        k = k % nums.size();
        // temporal array
        vector<int> newNums = nums;
        // index for nums vector
        int left = 0;
        // get elements for positions starting from k index
        for(int i = k; i < nums.size(); i++)
        {
            // new index of the element
            newNums[i] = nums[left];
            left++;
        }
        // get elements for position before k index
        for(int j = 0; left < nums.size(); j++)
        {
            newNums[j] = nums[left];
            left++;
        }

        // reorganization of the original array
        nums = newNums;
    }
};

// TODO: improve memory complexity to be O(1) instead of O(N)
int main()
{
    vector<int> nums1 = {1,2,3,4,5,6,7};
    Solution sol;
    sol.rotate(nums1, 1);
    return 0;
}