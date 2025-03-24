using namespace std;
#include <iostream>
#include <vector>

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int idx = m + n - 1; // current index to replace
        int num1 = m - 1; // index of largest number in nums 1
        int num2 = n - 1; // index of largest number in nums 2

        while (idx >= 0) // while there is an index to search
        {
            if(num2 < 0) { // if all numbers in second vector are used, then first vector is merged and sorted
                break;
            }
            if(num1 < 0) { // if all numbers in first vector are used, then replace all missing spaces with numbers from second vector
                nums1[idx] = nums2[idx];
                idx--;
                continue;
            }
            // Comparison between largest numbers
            if(nums2[num2] > nums1[num1]) // if nums2 largest number is larger than nums1
            {
                nums1[idx] = nums2[num2]; // replace with nums 2
                num2--; // change to the second largest
            }
            else // if nums2 largest number is smaller or equal to nums1
            {
                nums1[idx] = nums1[num1]; //replace with nums 2    
                num1--; // // change to the second largest
            }
            // Check for next index
            idx--;
        }
    }
};

int main()
{
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3;
    int n = 3;

    Solution sol;
    sol.merge(nums1, m, nums2, n);
    return 0;
}
