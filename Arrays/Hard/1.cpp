// Pascal Triangle

#include<bits/stdc++.h>
using namespace std;

// T.C(r)
// S.C(1)
void nCr(int n, int r){
    long long res =1;
    for (int i = 0; i < r; i++)
    {
        res = res * (n - i) / (i + 1);
        cout<<res<<" ";
    }
    
}

void print(int num); // Function declaration for "print"

void printTriangle(int n){
    int ans =1;
    print(ans);
    for (int i = 1; i < n; i++)
    {
        ans = ans * (n - i);
        ans = ans / (i);
        print(ans);
    }
    
}

// Function definition for "print"
void print(int num) {
    cout << num << " ";
}

int main() {
    int n,r;
    cin>>n>>r;
    // nCr(n,r);
    // printTriangle(n);

    return 0;
}