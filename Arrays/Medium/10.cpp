// Set matrix zeros
// Brute -> Better -> Optimal

// Brute
// Time complexity : (n*m) * (n+m) + (n*m) = O(n^3)
#include <bits/stdc++.h>
using namespace std;

int n, m; // Declare global variables for matrix dimensions

void matrixRow(int arr[4][4], int i)
{
    for (int j = 0; j < m; j++)
    {
        if (arr[i][j] != 0)
            arr[i][j] = -1;
    }
}

void matrixCol(int arr[4][4], int j)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i][j] != 0)
            arr[i][j] = -1;
    }
}

void MatrixZeros(int arr[4][4])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                matrixRow(arr, i);
                matrixCol(arr, j);
            }
        }
    }
}

void setZero(int arr[4][4])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == -1)
                arr[i][j] = 0;
        }
    }
}

void printMatrix(int arr[4][4], int n, int m)
{
    // Iterate over each row
    for (int i = 0; i < n; i++)
    {
        // Iterate over each column
        for (int j = 0; j < m; j++)
        {
            // Print the element followed by a space
            cout << arr[i][j] << " ";
        }
        // Print a newline after each row
        cout << endl;
    }
}

// Better
// Time complexity : O(2*n*m)
// Space complexity : O(n) + O(m) // Used for hashing
void setZero(int arr[4][4], int n, int m)
{
    int col[m] = {0};
    int row[n] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                col[j] = 1;
                row[i] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (col[j] == 1 || row[i] == 1)
                arr[i][j] = 0;
        }
    }
}

// Optimal
// Time complexity : O(n*m)

void optimalSetZero(int arr[4][4], int n, int m)
{   
    // int col[m] = {0}; -> arr[0][...]
    // int row[n] = {0}; -> arr[...][0]
    int col0 = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                // mark the ith row
                arr[i][0] = 0;
                // mark the jth column
                if (j != 0)
                    arr[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] != 0)
            {
                // check for col & row
                if (arr[i][0] == 0 || arr[0][j] == 0)
                    arr[i][j] = 0;
            }
        }
    }
    if (arr[0][0] == 0)
    {
        for (int j = 0; j < m; j++)
        {
            arr[0][j] = 0;
        }
    }
    if (col0 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            arr[i][0] = 0;
        }
    }
}

int main()
{
    cin >> n >> m; // Read matrix dimensions
    int arr[4][4]; // Declare matrix with fixed size

    // Input matrix elements
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Brute
    // MatrixZeros(arr); // Call function to set zeros
    // setZero(arr); // Call function to set zeros
    // printMatrix(arr, n, m); // Call function to print matrix

    // Better
    // setZero(arr, n, m);     // Call function to set zeros
    // printMatrix(arr, n, m); // Call function to print matrix

    // Optimal
    optimalSetZero(arr, n, m); // Call function to set zeros
    printMatrix(arr, n, m); // Call function to print matrix

    return 0;
}
