using namespace std;
#include <vector>
#include <unordered_map>

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> counts; // hashtable where key is the number and its value its the count
        int majority = 0; // majority number

        for (int i = 0; i < nums.size(); i++) // iterates the vector
        {
            counts[nums[i]] = counts[nums[i]] + 1; // value increases for current number
            if (counts[nums[i]] > counts[majority]) // if count from current number its bigger than current majority
            {
                majority = nums[i]; // number becomes majority
            }
        }
        return majority;
    }
};

int main()
{
    vector<int> nums1 = {3, 2, 3};
    Solution sol;
    sol.majorityElement(nums1);
    return 0;
}
