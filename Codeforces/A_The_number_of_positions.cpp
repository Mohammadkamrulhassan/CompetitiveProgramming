/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_267
 * time start:  2024-02-15 21:58:57
 * time end  :  2024-02-22 22:30:36
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,a,b; cin>> n >> a >> b;

    int ans = n-a; // now ans can --only

    if(ans > b) {
        ans = b+1;
    }
    cout << ans << endl;
}

int main(void) { 
    ll t = 1; 
    // cin >> t; 
    while(t--) solve();
}



