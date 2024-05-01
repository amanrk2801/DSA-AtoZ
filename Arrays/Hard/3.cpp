// 3 sum
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    int n = nums.size();
    if (n < 3) return result; // If the array has less than 3 elements, no triplets can be formed

    sort(nums.begin(), nums.end()); // Sort the array

    for (int i = 0; i < n - 2; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates
        
        int left = i + 1;
        int right = n - 1;
        int target = -nums[i]; // We need to find two numbers that sum up to -nums[i]

        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == target) {
                result.push_back({nums[i], nums[left], nums[right]});
                // Skip duplicates
                while (left < right && nums[left] == nums[left + 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--;
                left++;
                right--;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    return result;
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(nums);

    // Print the result
    for (const auto& triplet : result) {
        cout << "[";
        for (int i = 0; i < 3; ++i) {
            cout << triplet[i];
            if (i < 2) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}
