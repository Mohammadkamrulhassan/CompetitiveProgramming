//SOE_145
//11.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int tt; cin>> tt;
    while(tt--) {
        string a; cin >> a;
        if(a.size()%2 != 0) {
            cout << "NO\n";
        }
        else {
            (a.substr(0,a.size()/2) == a.substr(a.size()/2) ) ? cout << "YES\n" : cout << "NO\n";
        }
    }

    return 0;
}