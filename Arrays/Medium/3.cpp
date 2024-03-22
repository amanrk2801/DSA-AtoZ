// Majority Element(>n/2 times)
// Brute -> Better -> Optimal
#include<bits/stdc++.h>
using namespace std;

// Brute force

void printMajority(int arr[], int n ){
    int count;
    for(int i = 0; i < n; i++){
        count = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > n/2){
            cout << arr[i] << " ";
        }

    }
    cout << endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printMajority(arr,n);
    

}