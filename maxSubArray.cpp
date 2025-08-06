#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int currentSum = nums[0];
        int maxSum = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(currentSum, maxSum);
        }
        return maxSum;
    }
};

int main()
{
    vector<int> nums = {5, 4, -1, 7, 8};
    Solution s;
    int result = s.maxSubArray(nums);
    cout<<"The maximum Sub Array is: "<<result<<endl;
    return 0;
}