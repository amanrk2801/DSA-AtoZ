// Best time to Buy and Sell stocks
// Time Complexity: O(n)
// Space Complexity: O(1)

// Input:
// 6
// 7 1 5 3 6 4
// Output: 5 (index 4 value - index 1 value = 6-1 = 5)

// Maximum profit is 5

// Time complexity :O(n)
// Space complexity :O(1)
#include <bits/stdc++.h>
using namespace std;

void buyAndsell(int arr[], int n)
{
    int mini = arr[0];
    int maxProfit = 0;
    for (int i = 1; i < n; i++)
    {
        int cost = arr[i] - mini;
        maxProfit = max(maxProfit, cost);
        mini = min(mini, arr[i]);
    }

    cout << maxProfit << endl;
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
    buyAndsell(arr, n);

    return 0;
}