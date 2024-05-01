#include <bits/stdc++.h>
using namespace std;
// Using Recursion
// 1. Print "Hello" 5 times
// 2. Print linearly from 1 to N
// 3. Print from N to 1
// 4. Print Linearly from 1 to N(but by backtrack)
// 5. Print from N to 1(but by backtrack)

// 1. Print "Hello" 5 times
// Time and Space complexity -> T.C => O(n) and S.C => O(n)
void printName(int i, int n)
{
    if (i > n)
        return;
    cout << "Hello" << endl;
    printName(i + 1, n);
}

// 2. Print linearly from 1 to N
void printlinearly(int i, int n)
{
    if (i > n)
        return;
    cout << i << " ";
    printlinearly(i + 1, n);
}

// 3. Print from N to 1
void printReversed(int i, int n)
{
    if (i < 1)
        return;
    cout << i << " ";
    printReversed(i - 1, n);
}

// 4. Print Linearly from 1 to N(but by backtrack)
void printLinearlyBacktrack(int i, int n)
{
    if (i < 1)
        return;
    printLinearlyBacktrack(i - 1, n);
    cout << i << " ";
}

// 5. Print from N to 1(but by backtrack)
void printReversedBacktrack(int n)
{
    if (n==0)
        return;
    cout << n << " ";
    printReversedBacktrack(n-1);
}

int main()
{
    int n, i;
    cin >> n;
    printReversedBacktrack(n);
    return 0;
}