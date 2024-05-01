// Q. Second largest element in an array
// Time Complexity: O(n)
// Space Complexity: O(1)

// Better approach
// note: we are iterating 1 pass for getting the max value in the array and in 2 pass we get the second element in the array
// so, we need to iterate 2 times to get the second largest element in the array therefore O(n) + O(n) = O(2n) => O(n)

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n]; // array
    for(int i = 0; i < n; i++) { // loop over n elements
        cin >> arr[i]; // input
    }

    int max = arr[0]; // O(n)
    int secondMax = -1; // O(n)
    for(int i = 1; i < n; i++) { // loop over elements
        if(arr[i] > max) { // check
            secondMax = max; // check
            max = arr[i]; // check
        } else if(arr[i] > secondMax && arr[i] != max) { // check
            secondMax = arr[i]; // check
        }
    }
    cout << "Second Max: " << secondMax;
    return 0;
}