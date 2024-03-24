// Next Permutation
#include <bits/stdc++.h>
using namespace std;

// Brute force
// Algorithm
// 1. Find all permutations of the array
// 2. Sort the permutations
// 3. Linear search for the next permutation
// 4. Next Permutation is the answer

// Better approach
void next_permutationX(vector<int> &a)
{
    next_permutation(a.begin(), a.end());
    cout << "Next permutation" << endl;
    for (vector<int>::iterator it = a.begin(); it != a.end(); it++)
    {
        cout << *it << " ";
    }
}

// Optimal approach
// 1. Longer prefix match
// 2. find > a, but the smallest one. so that you stay close
// 3. Try to place remaining in sorted order

// Time complexity:O(3n)
// space complexity: O(1)

vector<int> OptimalMatch(vector<int> &a)
{
    int index = -1;
    int n = a.size();
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] < a[i + 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        reverse(a.begin(), a.end());
        return a;
    }

    for (int i = n - 1; i >= index; i--)
    {
        if (a[i] > a[index])
        {
            swap(a[i], a[index]);
            break;
        }
    }
    reverse(a.begin() + index + 1, a.end());

    return a;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    // next_permutationX(a);
    // cout << endl;
    vector<int> ans = OptimalMatch(a);
    cout << "Optimal permutation" << endl;
    for (vector<int>::iterator it = ans.begin(); it!= ans.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}