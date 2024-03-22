// Check if the array is sorted in c++

// Q. Check if the array is sorted
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>

using namespace std;

// Optimal approach

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
