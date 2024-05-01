#include<bits/stdc++.h>
using namespace std;

int main(){
    // Time Complexity
    /* Write a code to check time in seconds*/

    // Get the start time
    auto start = chrono::high_resolution_clock::now();

    cout<<"*****Code Start*****"<<endl;
    int n;
    cin >> n;
    // Here you can put the code for which you want to measure the time
    for(int i = 0; i < n; i++) {
        // Your code here
        cout << i << endl;
    }

    cout<<"*****Code End*****"<<endl;

    // Get the end time
    auto end = chrono::high_resolution_clock::now();

    // Calculate the duration
    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);

    cout << "Time taken by for loop is : " << duration.count() << " microseconds" << endl;

    // BigO notation -> worst case time complexity - Upper bound
    // O(n)

    // Theta notation -> average time complexity - Average bound
    // O(n^2)

    // Omega notation -> best case time complexity - Lower bound
    // O(nlogn)

    // Space Complexity
    // Memory space that program takes vary depending machine to machine
    // Auxiliary space - space used by the algorithm
    // Input space - space used by the input

    // Auxiliary space + input space = space complexity

    // Input -> a and b -> a, b are input space
    // storing c = a + b -> c is auxiliary space

    // O(3) -> (3),because we are using three variables a,b,c

    // Input -> a and b
    // Storing the result of a + b in b is incorrect as it modifies the input.

    // Take extra space is Ok, because it is not modifying the input space

    // Note: Never modify the input data as it may originate from a database or user input. 
    // Altering this data could lead to incorrect results or potential data loss.

    // Space
    // 1s == 10^8 operations
    // 2s == 2*10^8 operations
    // 3s == 3*10^8 operations

    // Time limit => 1s == O(10^8) operations

    return 0;
}