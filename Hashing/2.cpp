#include<bits/stdc++.h>
using namespace std;

// For characters hashing always use arrays
// ch-'a' 
// ch-'A'
// for all 256 characters use hashh[s[i]]++; // auto convert to interger

int main(){
    string s;
    cin>>s;

    // Precompute
    int hashh[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hashh[s[i]-'a']++;
    }
    
    int q;
    cin>>q;
    while (q--)
    {
        char c;
        cin>>c;
        // fetch
        cout<<hashh[c-'a']<<endl;
    }
    
}