// Left rotate an array by D place
// 7 15 -> (7: size of the array), (15: value of d rotation) i.e 7+7+1, 7 make the complete rotation again 7 make another rotation and 1 make the last rotation and the ans will be 2 3 4 5 6 7 1
// direct find: d = d % N => d = 15 % 7 => d = 1 therefore we only rotate by 1 and the ans will be 2 3 4 5 6 7 1
// Input: 1 2 3 4 5 6 7
// Output: 2 3 4 5 6 7 1

#include <bits/stdc++.h>
using namespace std;

// Input:
// 8 -> (8: size of the array)
// 7 5 2 11 2 43 1 1 -> (8: size of the array)
// 2 -> value of d rotation

// Output: 2 11 2 43 1 1 7 5

// Time Complexity : O(d) + O(n-d) + O(d) => O(n+d) => O(n)
// Space Complexity : O(d)
void leftRotateX(int arr[], int n, int d)
{
    d = d % n;
    int temp[d];
    for (int i = 0; i < d; i++) // O(d)
    {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++) // O(n-d)
    {
        arr[i - d] = arr[i];
    }
    for (int i = n - d; i < n; i++) // O(d)
    {
        arr[i] = temp[i - (n - d)];
    }
}

// optimized approach without using the temporary array use reverse function
// Time Complexity : O(n)
// Space Complexity : O(1)

void leftRotateY(int arr[], int n, int d)
{
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
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
    int d;
    cin >> d;
    leftRotateY(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}