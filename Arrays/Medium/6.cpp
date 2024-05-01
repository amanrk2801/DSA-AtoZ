#include <iostream>
using namespace std;

// Rearrange array elements by sign
// Input: 3 1 -2 -5 2 -4
// Output: 3 -2 1 -5 2 -4

// Time complexity: O(n)
// Space complexity: O(1)
void rearrangeArrayX(int arr[], int n)
{
    int positive[n], negative[n];
    int posIndex = 0, negIndex = 0; // Initialize index for positive and negative arrays

    // Store positive and negative elements separately
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            positive[posIndex++] = arr[i];
        }
        else
        {
            negative[negIndex++] = arr[i];
        }
    }

    // Rearrange elements alternately from positive and negative arrays
    int i = 0;
    for (int j = 0; j < posIndex || j < negIndex; j++) {
        if (j < posIndex) {
            arr[i++] = positive[j];
        }
        if (j < negIndex) {
            arr[i++] = negative[j];
        }
    }

    // Output rearranged array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// If positive are not equal to negative elements
// Time complexity: O(n)
// Space complexity: O(n)

void rearrangeArrayY(int arr[], int n){
    int positive[n], negative[n];
    int posIndex = 0, negIndex = 0; 
    for (int i = 0; i < n; i++){
        if (arr[i] >= 0){
            positive[posIndex++] = arr[i];
        }
        else{
            negative[negIndex++] = arr[i];
        }
    }
    int i = 0;
    for (int j = 0; j < posIndex || j < negIndex; j++){
        if (j < posIndex){
            arr[i++] = positive[j];
        }
        if (j < negIndex){
            arr[i++] = negative[j];
        }
    }
    for (int i = 0; i < n; i++){
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

    rearrangeArrayX(arr, n);
    cout << endl;
    rearrangeArrayY(arr, n);

    return 0;
}
