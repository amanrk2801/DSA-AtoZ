#include<bits/stdc++.h>
using namespace std;

// Number Hashing -> In C++ stl map and unordered-map is used for hashing and in Java we use HashMap.

// map -> O(N)
// unordered_map -> O(1)

// Hashing -> 1. Division Method (Linear chaining) 2. Folding Method 3. Mid Square Method

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // precompute
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // iterate in the map
    for(auto it : mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        // fetch
        cout<<mpp[number]<<endl;
    }
    

}