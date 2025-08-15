// SOE_141
// 09.01.2024

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int tt; cin>> tt;
    while(tt--) {
        string a; cin>> a;
        int x =0;
        if(a.size() == 1) x = 1;
        if(a.size() == 2) x = 3;
        if(a.size() == 3) x = 6;
        if(a.size() == 4) x = 10;
        cout << ((a[0]-'1')*10) + x << endl;
    }
}