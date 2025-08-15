//SOE_05
//02.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n,k,cnt=0; cin >> n >> k;

    vector<int> v(n); for(int i=0; i<n; ++i) cin>> v[i];

    for(int i=0; i<n; ++i) if(v[i]>=v[k-1] && v[i] != 0)cnt++;

    cout << cnt << endl;

    return 0;
}