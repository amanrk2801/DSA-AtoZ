// Print the matrix in spiral manner
#include <iostream>
#include <vector>
using namespace std;

vector<int> spiral_print_matrix(int a[][100], int n, int m)
{
    vector<int> spiral;
    int left = 0, right = m - 1;
    int top = 0, bottom = n - 1;
    while (top <= bottom && left <= right)
    {
        // Print the top row
        for (int i = left; i <= right; i++)
        {
            spiral.push_back(a[top][i]);
        }
        top++;

        // Print the right column
        for (int i = top; i <= bottom; i++)
        {
            spiral.push_back(a[i][right]);
        }
        right--;

        // Print the bottom row
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                spiral.push_back(a[bottom][i]);
            }
            bottom--;
        }

        // Print the left column
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                spiral.push_back(a[i][left]);
            }
            left++;
        }
    }

    return spiral;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Spiral Matrix: " << endl;
    vector<int> spiral = spiral_print_matrix(a, n, m);
    for (int i = 0; i < spiral.size(); i++)
    {
        cout << spiral[i] << " ";
    }
    cout << endl;
    return 0;
}
