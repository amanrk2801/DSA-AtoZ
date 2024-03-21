#include <bits/stdc++.h>
using namespace std;

// Reverse an array using recursion
void reverseArrayX(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    swap(arr[start], arr[end]);
    reverseArrayX(arr, start + 1, end - 1);
}

// using single pointer {start}
void reverseArrayY(int start, int arr[], int n)
{
    if (start >= n / 2)
    {
        return;
    }
    swap(arr[start], arr[n - start - 1]);
    reverseArrayY(start + 1, arr, n);
}

// Check if a string is palindrome or not
// T.C -> O(n/2), S.C -> O(n/2)
bool isPalindrome(int i, string &s)
{
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;
    return isPalindrome(i + 1, s);
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
    reverseArrayY(0, arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    string s = "madam";
    cout << isPalindrome(0, s);
    return 0;
}