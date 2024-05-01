// Find number of subarrays with sum K
#include <bits/stdc++.h>
using namespace std;

// Brute -> O(n^3)
void FindSubarrayX(int arr[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int l = i; l <= j; l++)
            {
                sum = sum + arr[l];
            }
            if (sum == k)
            {
                count++;
            }
        }
    }
    cout << count << endl;
}

// Better -> O(n^2)
void FindSubarrayY(int arr[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];

            if (sum == k)
            {
                count++;
            }
        }
    }
    cout << count << endl;
}

// Optimal -> 
// T.C -> O(n) * log(n)
// S.C -> O(n)

void FindSubarrayZ(int arr[], int n, int k)
{
    int cnt = 0;
    unordered_map<int, int> mp;
    mp[0] = 1;
    int preSum = 0;
    for (int i = 0; i < n; i++)
    {
        preSum += arr[i];
        int remove = preSum - k;
        cnt += mp[remove];
        mp[preSum]++;
    }
    cout << cnt << endl;
}

int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    FindSubarrayX(arr, n, k);
    FindSubarrayY(arr, n, k);
    FindSubarrayZ(arr, n, k);

    return 0;
}