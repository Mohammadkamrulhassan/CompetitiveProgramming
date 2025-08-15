//SOE_157
//13.01.2024

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n; cin>> n;
    vector<ll> v;
    ll mn = INT_MIN,mx = INT_MAX;
    for(ll i=0; i<n; ++i) {
        ll x,y; cin>>x>>y;
        if(x==1) mn = max(y,mn);
        else if(x==2) mx = min(y,mx);
        else if(x==3) v.push_back(y);
    }
    
    ll ans =mx-mn+1;
    for(int i=0; i<v.size(); ++i) if(v[i] >= mn && v[i] <= mx) ans--;
    
    cout << max(ans,0LL) << endl;
}

int main(void) {
    ll tt; cin>>tt;

    while(tt--) {
        solve();
    }

    return 0;
}