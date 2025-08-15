//SOE_153
//12.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n; cin>> n;
    cout << n/2 <<'\n';
    for(int i=1; i<=(n/2-1);++i) cout << 2 << ' ';
    cout << 2 + n%2;

    return 0;
}