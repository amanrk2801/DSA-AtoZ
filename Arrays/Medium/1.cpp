// Two Sum
// Given an array of integers, return indices of the two numbers such that they add up to a specific target.

// Example
// Input: [2, 7, 11, 15], target = 9
// Output: [0, 1]

#include <bits/stdc++.h>
using namespace std;

// Time complexity: O(nlogn)
// Space complexity: O(n)
void Sum(int arr[], int n, int k)
{
    map<int, int> mp; 
    for (int i = 0; i < n; i++)
    {
        int rem = k - arr[i];
        if (mp.find(rem) != mp.end())
        {
            std::cout << mp[rem] << " " << i;
            return;
        }

        mp[arr[i]] = i;
    }
    std::cout << "No such pair";
}

int main()
{
    int n;
    int target;
    cin >> n;
    cin >> target;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Sum(a, n, target);
}