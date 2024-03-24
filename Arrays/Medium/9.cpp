// Longest consecutive subsequence in an array
// Brute -> Better -> Optimal

#include<bits/stdc++.h>
using namespace std;

// Better
int longestSubsequence(int arr[], int n){
    sort(arr, arr + n);
    int ans = 1;
    int count = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i-1] + 1){
            count++;
        }else if(arr[i] != arr[i-1]){
            ans = max(ans, count);
            count = 1;
        }
    }
    return max(ans, count);
}

// Optimal
int longestSubsequence2(int arr[], int n){
    unordered_set<int> s;
    for(int i = 0; i < n; i++){
        s.insert(arr[i]);
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(s.find(arr[i] - 1) == s.end()){
            int j = arr[i];
            while(s.find(j) != s.end()){
                j++;
            }
            ans = max(ans, j - arr[i]);
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << longestSubsequence(arr, n) << endl;
    cout << longestSubsequence2(arr, n) << endl;
    return 0;

    return 0;
}