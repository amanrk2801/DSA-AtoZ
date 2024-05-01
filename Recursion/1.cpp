// Recursion
// : When a fuction is called itself, until a specific condition is met, then it is called recursion.

// ->Recursion
// ->Base condition
// ->Stackoverflow/stackspace
// ->Recursion tree


#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
void print()
{
    if (cnt == 3)
        return;
    cout << cnt << endl;
    cnt++;
    print();
}

int main()
{

    print();

    return 0;
}