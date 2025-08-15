//SOE_144
//11.01.2024

#include<bits/stdc++.h>
using namespace std;
void solve() {
    int m,n; cin>> m >> n;
    int mx = max(m,n); int mn = min(n,m);
    if((mn*2) < mx) {
        cout << mx*mx << '\n';
        return;
    }else {
        cout << mn*mn*4<< '\n';
        return;
    }
}

int main(void) {
    int tt; cin>> tt;
    while(tt--) {
        solve();
    }
    return 0;
}