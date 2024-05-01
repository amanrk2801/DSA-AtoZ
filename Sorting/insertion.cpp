#include<bits/stdc++.h>
using namespace std;
// Insertion Sort
// Insert an element from unsorted array to its correct position in sorted array.
// Takes an element & place it in the correct position.
// Time Complexity: O(n^2)
// Best case : O(n) // when the array is already sorted.
// Average case : O(n^2) // when the array is in random order.
// Worst case : O(n^2) // when the array is in reverse order.

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
            cout << "runs" << endl; // to check how many times the loop runs
        }
        arr[j + 1] = key;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Hello World!" << endl;

}