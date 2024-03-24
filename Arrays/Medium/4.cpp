// Kadane's Algorithm maximum sub-array sum

#include <iostream>
#include <vector>
using namespace std;

// Brute force
// Time complexity : O(n^3)
// space complexity : O(1)
int maxSubArraySumX(vector<int> &nums)
{
    int maxi = INT_MIN; // Initialize maxi with INT_MIN
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += nums[k];
                maxi = max(maxi, sum);
            }
        }
    }
    return maxi;
}

// Better solution
// Time complexity : O(n^2)
// Space complexity : O(1)

int maxSubArraySumY(vector<int> &nums)
{
    int maxi = INT_MIN; // Initialize maxi with INT_MIN
    int sum;
    for (int i = 0; i < nums.size(); i++)
    {
        sum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            sum += nums[j];
            maxi = max(maxi, sum);
        }
    }
    return maxi;
}

// Optimal approach
// Kadane's Algorithm
// Time complexity : O(n)
// Space complexity : O(1)

int maxSubArraySumZ(vector<int> &nums)
{
    long long maxi = LONG_MIN;
    long long sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        maxi = max(maxi, sum); // O(log(n))
        if (sum < 0)
            sum = 0;
    }
    return maxi < 0 ? 0 : maxi;
}



// Time complexity : O(n)
// Space complexity : O(1)
void maxSubArraySumZ1(const vector<int> &nums)
{
    long long maxi = LONG_MIN;
    int sum = 0;
    int start;
    int ansStart = -1;
    int ansEnd = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (sum == 0)
            start = i;
        sum += nums[i];
        if (sum > maxi)
        {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
        if (sum < 0)
            sum = 0;
    }
    cout << "Maximum sub-array sum is : " << maxi << endl;
    cout << "Sub-array is : ";
    for (int i = ansStart; i <= ansEnd; i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3};
    // cout << maxSubArraySumX(nums) << endl;
    // cout << maxSubArraySumY(nums) << endl;
    // cout << maxSubArraySumZ(nums) << endl;
    maxSubArraySumZ1(nums);
    return 0;
}