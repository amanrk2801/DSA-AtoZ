#include<bits/stdc++.h>
using namespace std;

// Bubble sort
// Compare the adjacent elements and swap them. 
// Time Complexity: O(n^2)

void swapx(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}


// If the array is not sorted then we have to run the loop n-1 times.
// Time Complexity: O(n^2)
// void bubbleSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swapx(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }

// optimized bubble sort
// If the array is already sorted then we can break the loop.
// Time Complexity: O(N) (Best case)
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapx(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
        cout<<"runs"<<endl; // to check how many times the loop runs
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
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}