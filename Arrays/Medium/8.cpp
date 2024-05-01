// Leaders in an array
// Brute -> Better -> Optimize

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Time complexity : O(n^2)
// Space complexity : O(n) // store to ans array
void leader(int arr[], int n){
    int ans[n]; // Array to store leaders
    int count = 0; // Counter for number of leaders found
    for(int i = 0; i < n; i++){
        bool leader = true; // Reset leader status for each element
        for(int j = i + 1; j < n; j++){
            if(arr[j] > arr[i]){
                leader = false;
                break;
            }
        }
        if(leader){ // If it's a leader
            ans[count++] = arr[i]; // Store the leader in the answer array
        }   
    }
    // Print the leaders
    for(int i = 0; i < count; i++){
        cout << ans[i] << " ";
    }
}

// Optimal solution
// Time complexity : O(n)
// Space complexity : O(n) // to store the answer array

void leader2(int arr[], int n){
    int maxi = INT_MIN;
    int ans[n];
    int cnt = 0;
    // O(n)
    for(int i = n-1; i >= 0; i--){
        if(arr[i] > maxi){
            ans[cnt++] = arr[i];
        }
        maxi= max(maxi, arr[i]);
    }
    sort(ans, ans + cnt); // O(n log n)
    for(int i = 0; i < cnt; i++){
        cout << ans[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    leader(arr, n);
    cout << endl;
    leader2(arr, n);
    return 0;
}

