using namespace std;
#include <vector>

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int left = 0; // pointer to index to check
        int right = nums.size() - 1; // pointer to index not swapped
        while (left <= right) { // checks until all values have been checked
            if (nums[left] != val){ // if its not the element check the next index
                left++;
                continue;
            } // if its the element move the value to the end of the array
            swap(nums, left, right);   
            right--; // and point to the next (last) index not swapped
        }
        return left;
    }
private:
    void swap(vector<int> &vec, int first, int second) { // swap funcion
        int temp = vec[first];
        vec[first] = vec[second];
        vec[second] = temp;
    }
};

int main()
{
    vector<int> nums1 = {};
    Solution sol;
    sol.removeElement(nums1, 1);
    return 0;
}
