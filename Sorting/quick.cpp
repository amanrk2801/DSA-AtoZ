// Quick sort : Divide and conquer algorithm
// Time complexity: O(nlogn)
// Space complexity: O(1)
// Algorithm:
// 1. Choose a pivot element from the array.
// 2. Partition the array such that all elements less than the pivot are on the left side of the pivot and all elements greater than the pivot are on the right side of the pivot.
// 3. Recursively apply the above steps to the left and right subarrays.
// 4. The base case is when the left index is greater than or equal to the right index.
// 5. The pivot element is placed in its correct position in the array.
// 6. The array is sorted.
#include <iostream>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high) { // O(n)
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high-1) {
            i++;
        }
        while (arr[j] > pivot && j >= low+1) {
            j--;
        }
        if (i < j) {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[low], &arr[j]);
    return j;

}

void quickSort(int arr[], int low, int high) { // O(nlogn) 
    if (low < high) {
        int pi = partition(arr, low, high); // O(n)
        quickSort(arr, low, pi - 1); // O(logn)
        quickSort(arr, pi + 1, high); // O(logn)
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}


