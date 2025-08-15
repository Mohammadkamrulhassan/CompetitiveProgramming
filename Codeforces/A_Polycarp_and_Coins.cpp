//SOE_147
//12.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int tt; cin>> tt;
    while(tt--) {
        int n; cin>> n;
        if(n%3 == 0) cout << n/3 << ' ' << n/3 << '\n';
        else if(n%3 == 2 ) cout << n/3 << ' ' << (n/3) + 1 << '\n';
        else if(n%3 == 1 ) cout << (n/3) + 1 << ' ' << n/3 << '\n';
    }
    return 0;
}