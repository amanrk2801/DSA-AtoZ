// Intersection of the two sorted arrays
// Input:
// 8 7
// 1 2 2 3 3 4 5 6
// 2 3 3 5 6 6 7
// Output: 2 3 3 5 6
#include <bits/stdc++.h>
using namespace std;

// Time complexity : O(n*m)
// Space complexity : O(m)
void intersectionX(int a[], int b[], int n, int m)
{
    vector<int> ans;
    int vis[m] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j] && vis[j] == 0)
            {
                ans.push_back(a[i]);
                vis[j] = 1;
                break;
            }
            if (b[j] > a[i])
            {
                break;
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

// Optimal solution
// Time complexity : O(n+m)
// Space complexity : O(1)

void intersectionY(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    int a[n];
    int b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    intersectionX(a, b, n, m);
    cout << endl;
    intersectionY(a, b, n, m);

    return 0;
}