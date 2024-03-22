// Longest subarray with given sum(Positives)

#include <bits/stdc++.h>
using namespace std;

// Brute force
// Time complexity: O(n^3)
// Space complexity: O(1)
void LongestSubArrayX(int arr[], int n, int k)
{
    int len = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            if (sum == k)
            {
                len = max(len, j - i + 1);
            }
        }
    }
    cout << len << " ";
}

// Better approach
// Time complexity: O(n)
// Space complexity: O(n)

void LongestSubArrayY(int arr[], int n, int k)
{
    map<long long, int> mp;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }
        long long rem = sum - k;
        if (mp.find(rem) != mp.end())
        {
            int len = i - mp[rem];
            maxLen = max(maxLen, len);
        }
        if (mp.find(sum) == mp.end())
            mp[sum] = i;
    }
    cout << maxLen << " ";
}

// Optimal approach
// Time complexity: O(n)
// Space complexity: O(1)

void LongestSubArrayZ(int arr[], int n, int k)
{
    int left = 0;
    int right = 0;
    long long sum = arr[0];
    int maxLen = 0;
    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < n)
        {
            sum += arr[right];
        }
    }
    cout << maxLen << " ";
}
int main()
{
    int n;
    int k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    LongestSubArrayX(arr, n, k);
    cout << endl;
    LongestSubArrayY(arr, n, k);
    cout << endl;
    LongestSubArrayZ(arr, n, k);

    return 0;
}