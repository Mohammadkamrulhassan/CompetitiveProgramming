//SOE_148
//12.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int tt; cin >> tt;
    while(tt--) {
        int a[3]; cin>> a[0] >> a[1] >> a[2]; sort(a,a+3);
        a[1] + a[2] > 9 ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}