using namespace std;
#include <vector>

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int k = 0; // number of unique elements
        for(int i = 0; i < nums.size(); i++) // iterates in all the array
        {
            if(i == 0) { k++; continue; } // the first element is unique
            if(nums[i] != nums[i-1]) // if the current element is different
            {
                k++; // this element is unique
                nums[k-1] = nums[i]; // its located in the correct index
            }
        }
        return k;
    }
};

int main()
{
    vector<int> nums1 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    Solution sol;
    sol.removeDuplicates(nums1);
    return 0;
}
