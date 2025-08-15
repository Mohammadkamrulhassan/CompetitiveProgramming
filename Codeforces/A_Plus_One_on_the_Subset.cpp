// SOE_140
// 09.01.2024

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int tt; cin>> tt;
    while(tt--) {
        int n; cin>> n;
        vector<int> v(n);
        for(int i=0; i<n; ++i) cin>> v[i]; sort(v.begin(),v.end());
        cout << v[n-1] - v[0] << '\n';
    }
}