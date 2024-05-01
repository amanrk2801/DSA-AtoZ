// Find the union and intersection of two sorted arrays.
// input: 
// 6 5
// 1 1 2 3 4 5
// 2 3 4 4 5

// output: 1 2 3 4 5

// Interview tips:
// 1. Brute force approach is to use two loops and compare each element of one array with the other.
// 2. Better performance can be achieved by using two pointers and comparing the elements.
// 3. Optimal performance can be achieved by using hashing or set data structure.

#include <bits/stdc++.h>

using namespace std;

// Brute force approach.
// T.C => O(n1logn) + O(n2logn) + O(n1+n2) 
// S.C => O(n1+n2) + O(n1+n2)
void UnionX(int arr1[], int arr2[], int n1, int n2)
{

    set<int> mySet;
    for (int i = 0; i < n1; i++) // O(n1logn)
    {
        mySet.insert(arr1[i]);
    }
    for (int i = 0; i < n2; i++) // O(n2logn)
    {
        mySet.insert(arr2[i]);
    }
    int myUnion[mySet.size()];
    int index = 0;
    for (auto it : mySet) // O(n1+n2)
    {
        myUnion[index++] = it;
    }
    for (int i = 0; i < mySet.size(); i++)
    {
        cout << myUnion[i] << " ";
    }
}

// Optimal approach.
// T.C => O(n1+n2)
// S.C => O(n1+n2) // If all elements are distinct.

void UnionY(const int arr1[], const int arr2[], int n1, int n2)
{
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (i > 0 && arr1[i] == arr1[i - 1])
        {
            i++;
            continue;
        }
        if (j > 0 && arr2[j] == arr2[j - 1])
        {
            j++;
            continue;
        }
        if (arr1[i] < arr2[j])
        {
            cout << arr1[i++] << " ";
        }
        else if (arr1[i] > arr2[j])
        {
            cout << arr2[j++] << " ";
        }
        else
        {
            cout << arr1[i++] << " ";
            j++;
        }
    }
    while (i < n1)
    {
        if (i == 0 || arr1[i] != arr1[i - 1])
        {
            cout << arr1[i++] << " ";
        }
    }
    while (j < n2)
    {
        if (j == 0 || arr2[j] != arr2[j - 1])
        {
            cout << arr2[j++] << " ";
        }
    }
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int arr1[n1];
    int arr2[n2];
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];
    
    UnionX(arr1, arr2, n1, n2);
    cout << endl;
    UnionY(arr1, arr2, n1, n2);
    
    return 0;
    
}