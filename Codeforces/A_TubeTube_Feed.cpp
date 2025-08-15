/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_329
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-21 00:05:59
 * time end  :  2024-03- 21 00:25:42
*/

#include<bits/stdc++.h>
using namespace std;

void faltu(void) {
    int n,k; cin>>n>> k;

    vector<pair<int,int> > v(n);
    for(int i=0; i<n; ++i) {
        cin >> v[i].first;
    }
    for(int i=0; i<n; ++i) {
        cin >> v[i].second;
    }

    int ct = 0, ans = -1, enta_mx = -1;

    for(int i=0; i<n; ++i) {
        if(v[i].first + ct <= k) {
            if(v[i].second > enta_mx ) {
                ans = i+1;
                enta_mx = v[i].second;
            }
        }
        ct++;
    }
    cout << ans << '\n';
}

int main(void) {
    int tt; cin>> tt;

    while(tt--) {
        faltu();
    }
}