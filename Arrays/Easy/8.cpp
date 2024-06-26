// Linear search for an element in an array cpp

#include <iostream>

using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(1)

int Search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++) // O(n)
    {
        if (arr[i] == x)
        {
            cout << i;
            return;
        }
    }
    cout << -1;
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
    int x;
    cin >> x;
    Search(arr, n, x);
    
    return 0;
}
