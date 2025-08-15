/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_372
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Apr-11 23:12:50
 * time end  :  2024-04- 11 23:53:57
*/

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int n; cin>> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin>> v[i];
    v.push_back(v[0]);
    int t = 0;
    int mn = INT_MAX;
    for(int i=0; i<n; ++i) {
        mn = min(abs(v[i+1] - v[i]), mn);
    }
    // cout << mn << '\n';
    for(int i=0; i<n; ++i) {
        if(mn == abs(v[i+1]-v[i])) {
            cout << i+1 << ' ' << ( i == n-1 ? 1 : i+2) << '\n';
            break;
        }
    }
}