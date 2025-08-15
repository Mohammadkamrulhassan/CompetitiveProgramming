/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_317
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-16 03:38:21
 * time end  :  2024-03- 16 03:48:52
*/

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n; cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; ++i) cin>> v[i];

    for(int i=0; i<n; ++i) {
        if(i==0) {
            cout << abs(v[0]-v[1]) << ' ' << abs(v[0]-v[n-1]) << '\n';
        }
        else if(i == n-1) {
            cout << abs(v[n-1]-v[n-2]) << ' ' << abs(v[n-1]-v[0]) << '\n';
        }
        else {
            cout << min(abs(v[i]-v[i-1]),abs(v[i]-v[i+1])) << ' ' << max(abs(v[i]-v[0]),abs(v[i]-v[n-1])) << '\n';
        }
    }
}