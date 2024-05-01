#include <bits/stdc++.h>
using namespace std;

// Selection Sorting
// Select the minimum number and swap it.
// Time Complexity: O(n^2)

void swapx(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swapx(arr[i], arr[min_index]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
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
    selection_sort(arr, n);

    cout << "Hello World!" << endl;
}