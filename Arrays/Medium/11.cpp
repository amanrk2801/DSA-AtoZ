// Rotate matrix by 90 degree
#include <bits/stdc++.h>
using namespace std;

// Brute
// Time complexity : O(n^2)
// Space complexity : O(n^2)
void TransformMatrix(int arr[4][4], int n)
{
    // Create a temporary array to store the rotated matrix
    int temp[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Rotate the elements by 90 degrees
            temp[j][n - 1 - i] = arr[i][j];
        }
    }
    // Copy the rotated matrix back to the original array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = temp[i][j];
        }
    }
}

// Better
// Time complexity : O(n/2 * n/2) + O(n * n/2)
// Space complexity : O(1)

void TransposeMatrix(int arr[4][4], int n)
{
    // Transpose
    // O(n/2 * n/2)
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    // reverse
    // O(n * n/2)
    for (int i = 0; i < n; i++)
    {
        // row is arr[i]
        reverse(arr[i], arr[i] + n);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    // TransformMatrix(arr, n);
    TransposeMatrix(arr, n);
    // Output the rotated matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
