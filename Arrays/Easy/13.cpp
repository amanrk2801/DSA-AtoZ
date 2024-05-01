// Find the number that appears once, and other numbers twice.
// 1. Brute force: Use a nested loop to find the number that appears once.
// 2. Better performance: Use hash array to find the number that appears twice. Hash array max digit in array + 1.
// 3. Optimal approach: Use the XOR operation to find the number that appears once.

// Input:
// 7
// 1 1 2 3 3 4 4 

// Output: 2

#include <iostream>
#include <vector>

using namespace std;


// Optimal implementation
// Time complexity: O(n)
// Space complexity: O(1)
void printOnce(vector<int> &nums)
{
    int x1 = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        x1 = x1 ^ nums[i];
    }
    cout << x1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    printOnce(nums);
    
    return 0;
}