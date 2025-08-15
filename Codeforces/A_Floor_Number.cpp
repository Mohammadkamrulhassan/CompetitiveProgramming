//SOE_168
//16.01.2024

#include <bits/stdc++.h>
using namespace std;

void SOE();void SOE02();

int main(void) {
	int tt; cin>>tt;
    
    while(tt--) {
        SOE();
    }
	
}

void SOE() {
    int n,x;cin>>n>>x;

    n<3 ? cout << "1\n" : cout << 1+((n-2)/x) + ((n-2)%x ? 1 : 0) << endl;
}

void SOE02() {
    int n,x;cin>>n>>x;

    if(n<3) cout << "1\n";
    else {
        cout << 1+((n-2)/x) + ((n-2)%x ? 1 : 0) << endl;
    }    
}