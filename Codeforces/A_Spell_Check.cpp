//SOE_167
//16.01.2024

#include <bits/stdc++.h>
using namespace std;

void hello() {
    int n;string a_main;cin>>n>>a_main;

    bool a['z'] ={false};
    for(int i=0; i<n; ++i) {
        a[a_main[i]] = true;
    }
    (a['T']  && a['i'] && a['m'] && a['u'] && a['r'] && n==5) ?
        cout << "YES\n" : cout << "NO\n";
}

int main(void) {
	int tt; cin>>tt;
    
    while(tt--) {
        hello();
    }
	
}