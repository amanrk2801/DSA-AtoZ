// Merge sort
// Time complexity: O(nlogn) // O(n) for the merge function and O(logn) for the mergeSort function
// Space complexity: O(n) // O(n) for the temporary array

#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    // [low...mid] and [mid+1...high]
    int left = low, right = mid + 1;
    while (left <= mid && right <= high) // O(n)
    {
        if (arr[left] < arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid) // O(n)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high) // O(n)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
        arr[i] = temp[i - low];
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2; // O(1)
        mergeSort(arr, low, mid);     // O(logn)
        mergeSort(arr, mid + 1, high); // O(logn)
        merge(arr, low, mid, high); // O(n)
    }
}

int main()
{
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    mergeSort(arr, 0, arr.size() - 1);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}