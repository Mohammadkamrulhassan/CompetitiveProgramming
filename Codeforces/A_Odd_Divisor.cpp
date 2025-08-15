//SOE_151
//12.01.2024

#include<bits/stdc++.h>
using namespace std;
void solve() {
    long long int n; cin>> n;
    n%2 || n&(n-1) ? cout << "YES\n" : cout << "NO\n";
    /*
    if n=odd it can divisor of n which is is odd.
    if n=even then it can be odd divisor if it is not 2's power.
    8 4 2 1
    1 0 0 0 = 8 n
    0 1 1 1 = 7 (n-1)
    0 0 0 0 = 0 n&(n-1)
    
    //alternative
    // if(n%2) {
    //     cout << "YES\n";
    //     return;
    // }
    //checking 2's power
    // n /=2;
    // if(n%2 && n!=1) {
    //     cout << "YES\n";
    //     return;
    // }
    */
}

int main(void) {
    int tt; cin>> tt;
    while(tt--) {
        solve();
    }

    return 0;
}