//SOE_22
//03.01.2024

#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;cin >>n;
    vector<int> a(n);
    
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(),a.end()); a[0]++;

    for(int i =1; i< n ; i++) a[0] *=a[i];

    cout << a[0] << endl;
}

int main(){
    int t; cin >> t;
    while(t--) solve();
}