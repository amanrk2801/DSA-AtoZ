#include <bits/stdc++.h>

using namespace std;

// Multiple Recursion calls
// Fibonacci Series -> T.C -> O(2^N), S.C -> O(N)
// 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377
int fib(int n) // n = 4
{
    if (n <= 1)
        return n;
    int i = fib(n - 1);
    int j = fib(n - 2);
    return i + j;
}

// T.C -> O(2^n) -> exponential 
// S.C -> O(N)

int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    return 0;

    return 0;
}