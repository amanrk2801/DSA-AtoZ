// Remove duplicates in-place from sorted array c++ program

// arr[] = {1,1,2,2,2,3,3}
// arr[] = {1,2,3}
// return 3 because 1,2,3 are unique elements in the array

// 1. Brute force: use set data structure to store unique elements and then return the size of the set T.C = O(nlogn) because we use set data structure. S.C = O(n) if the array contain all unique elements.
// 2. Optimal approach: use 2 pointers i and j. i = 0 and j = 1. If arr[i] == arr[j] then increment j else increment i and set arr[i] = arr[j]. T.C = O(n) and S.C = O(1)

#include <iostream>

using namespace std;

void removeDuplicates(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    cout <<"By Optimal approach: "<< i + 1 << endl;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    removeDuplicates(arr, n);
    return 0;
}