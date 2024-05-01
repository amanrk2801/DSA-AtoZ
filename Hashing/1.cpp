#include <bits/stdc++.h>
using namespace std;

// int arr[1e7]; // you can declare a global array of size 10^7 or 10^8 but not in main function
// int hashh[1000000]; // global declarations of arrays, if we not initialized it will contain 0 values

// O(N)
int coutNumberX(int number, int arr[], int size)
{
    int cnt = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            cnt = cnt + 1;
        }
    }
    return cnt;
}

int main()
{
    // int arr[] = {1, 2, 1, 3, 2, 5};
    // int number = 2;
    // int size = sizeof(arr)/sizeof(arr[0]);
    // cout<<coutNumberX(number, arr, size);

    // Input
    // 5 -> array size
    // 1 3 2 1 3 -> array 
    // 5 -> 5 number given below to find there occurrences in the array
    // 1 -> number of occurrences of 1
    // 4 -> number of occurrences of 4 
    // 2 -> number of occurrences of 2
    // 3 -> number of occurrences of 3
    // 12 -> number of occurrences of 12

    // Output
    // 2
    // 0
    // 1
    // 2
    // 0

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Precompute the number of occurrences of each number
    // int arr[1e6] // you can declare this much 10^6 size array in main function not more than that if we declare here 10^7 it will give you the segmentation fault you need to do globally to declare 10^7 or 10^8 size array
    int hashh[100000] = {0};
    // int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hashh[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // Fetch the number of occurrences of the number
        cout << hashh[number] << endl;
    }

    return 0;
}