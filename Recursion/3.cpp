#include <bits/stdc++.h>
using namespace std;

// Parameterised
void sumX(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }
    sumX(i - 1, sum + i);
}

// Functional
int sumY(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sumY(n - 1);
}

// Factorial of N -> T.C -> O(N) , S.P -> O(N)
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int n;
    cin >> n;
    sumX(n, 0);
    cout << endl;
    cout << sumY(n);
    cout << endl;
    cout << factorial(n);
    return 0;
}