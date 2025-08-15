//SOE_165
//15.01.2024

#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; string a,b; cin>> n>>a>>b;
    int one =0,zero=0;int ans=0;
    string a2="",b2="";
    for(int i=0; i<n; ++i) {
        if(a[i] != b[i]) {
            ans++;
            a2 +=a[i]; b2 += b[i];
        }
        
    }
    // cout << a2 << '\n' << b2 << ' ';
    sort(a2.begin(),a2.end());
    sort(b2.begin(),b2.end());
    int ans2 =0;
    for(int i=0; i<a2.size(); ++i) {
        if(a2[i] != b2[i]) {
            ans2++;
        }
    }
    // cout << a2 << ' ' << b2 << ' ';
    cout << ans - ((ans - ans2)/2) << endl;
}

int main(void) {
    int tt; cin>>tt;
    while(tt--) solve();

    return 0;
}