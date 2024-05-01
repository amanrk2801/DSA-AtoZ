// Sort an array of 0s, 1s and 2s
#include <bits/stdc++.h>

using namespace std;

// Better approach
// use three pointers instead of sorting
// Time complexity : O(2n)
// Space complexity : O(1)
// Using counting sort
void sortY(int arr[], int n)
{
    int x = 0, y = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            x++;
        else if (arr[i] == 1)
            y++;
        else
            z++;
    }
    for (int i = 0; i < x; i++)
    {
        arr[i] = 0;
    }
    for (int i = x; i < x + y; i++)
    {
        arr[i] = 1;
    }
    for (int i = x + y; i < x + y + z; i++)
    {
        arr[i] = 2;
    }
}

// Using Dutch national flag algorithm
// Time complexity : O(n)
// Space complexity : O(1)
void sortZ(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low], arr[mid]);
            low++;
            mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[high]);
            high--;
            break;
        }
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

    // Brute force
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;

    // Using counting sort
    sortY(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Using Dutch national flag algorithm
    sortZ(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
