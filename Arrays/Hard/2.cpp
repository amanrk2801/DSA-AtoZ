// Majority Element (n/3 times)#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void majority(int arr[], int n)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    vector<int> result;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second > n / 3)
        {
            result.push_back(it->first);
        }
    }
    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;
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
    majority(arr, n);
    return 0;
}
