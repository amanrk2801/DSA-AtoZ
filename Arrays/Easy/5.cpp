// Left Rotate the array by one place
#include <bits/stdc++.h>

using namespace std;

// Time complexity: O(n)
// Space complexity: O(1)
void leftRotate(int arr[], int n, int d)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++) // O(n)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

int main()
{
    int n, d; // Number of elements in the array and number of rotations
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    leftRotate(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}