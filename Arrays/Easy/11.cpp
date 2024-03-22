// Find the missing number in an array
// 1. Brute force: if the array is not sorted, sort it and then find the missing number.
// 2. Better approach: Use the sum of n natural numbers formula to find the missing number.
// 3. Optimal approach: Use XOR operation to find the missing number.
// Input:
// 5
// 1 2 4 5 6
// Output: 3
#include <bits/stdc++.h>
using namespace std;

void findMissing(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int total = (n + 1) * (n + 2) / 2;
    cout << total - sum;
}

// USING XOR because XOR of two same numbers is 0.
// Optimal approach
// Time complexity: O(n+n) = O(2n) => O(n)
// Space complexity: O(1)
void findMissingXOR(int arr[], int n)
{
    int x1 = arr[0];
    int x2 = 1;
    for (int i = 1; i < n; i++)
    {
        x1 = x1 ^ arr[i];
    }
    for (int i = 2; i <= n + 1; i++)
    {
        x2 = x2 ^ i;
    }
    cout << (x1 ^ x2);
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
    findMissing(arr, n);
    cout<<endl;
    findMissingXOR(arr, n);
}