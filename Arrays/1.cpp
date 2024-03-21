// Arrays: Array is a collection of similar data items. Array is a fixed size data structure which means once array is created then it cannot be resized. We can access elements of an array by using indices. Array is a linear data structure.
// If we declare array globally then all elements of array are initialized with 0. If we declare array locally then all elements of array are initialized with garbage values.
// Maximum size of array int arr[10^6] inside main function and globally it is 10^7.

// Solve problems using this : Brute -> Better -> Optimal

// Note: Brute -> Better -> Optimal
// 1. Brute force approach is not always the best approach. We should always try to optimize the solution.
// 2. Better approach is to use STL library functions.
// 3. Optimal approach is to use hashing.

// Q. Largest element in an array
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Brute Force Approach
int findMaxBrute(int arr[], int n) {
    int max = INT_MIN;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[j] > max) {
                max = arr[j];
            }
        }
    }
    return max;
}

// Better Approach
int findMaxBetter(int arr[], int n) {
    sort(arr, arr+n);
    return arr[n-1];
}

// Optimal Approach
int findMaxOptimal(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    auto start = high_resolution_clock::now();
    cout << "Brute Force: " << findMaxBrute(arr, n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << " Time taken: " << duration.count() << " microseconds" << endl;

    start = high_resolution_clock::now();
    cout << "Better: " << findMaxBetter(arr, n);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << " Time taken: " << duration.count() << " microseconds" << endl;

    start = high_resolution_clock::now();
    cout << "Optimal: " << findMaxOptimal(arr, n);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << " Time taken: " << duration.count() << " microseconds" << endl;

    return 0;
}
