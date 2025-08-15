//SOE_135
//06.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n,t; cin>> n>> t;
    int arr[n+1]; long long int tt=1;
    for(int i=1; i<=n; ++i) {
        cin>> arr[i];
        if(i== tt)
            tt = (i+arr[i]);
        if(tt == t) {
            cout << "YES\n";
            return 0;
        }
    }cout << "NO\n";

    return 0;
}