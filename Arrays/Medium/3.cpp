// Majority Element(>n/2 times)
// Brute -> Better -> Optimal
#include <bits/stdc++.h>
using namespace std;

// Brute force
// Time Complexity : O(n^2)
// Space Complexity : O(1)
int printMajorityX(int arr[], int n)
{
    int count;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > n / 2)
        {
            return arr[i];
        }
    }
    return -1;
}

// Better solution
// using Hashing
// Time Complexity : O(nlogn) + O(n)
// Space Complexity : O(n)

int printMajorityY(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second > n / 2)
        {
            return it->first;
        }
    }
    return -1;
}

// Optimal solution
// Boyer-Moore Voting Algorithm
// Time Complexity : O(n)
// Space Complexity : O(1)

// Input : 7 7 5 7 5 1 5 7 5 5 7 7 5 5 5 5
// Output : 5

// Array size : 16
// 5 appears to be more than 9 times
// (16/2 = 8)
// 9 times > 16/2

int printMajorityZ(int arr[], int n)
{
    int cnt = 0;
    int el;
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            cnt = 1;
            el = arr[i];
        }
        else if (arr[i] == el)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    int cnt1=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == el)
        {
            cnt1++;
        }
        if (cnt1 > n / 2)
        {
            return el;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << printMajorityX(arr, n) << endl;
    cout << printMajorityY(arr, n) << endl;
    cout << printMajorityZ(arr, n) << endl;
    return 0;

    return 0;
}