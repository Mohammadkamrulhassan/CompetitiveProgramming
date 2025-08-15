//SOE_02
//02.01.2024

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int tt; cin>>tt;
    
    while(tt--) {
        string a; cin>>a;
        
        a.size() > 10 ? cout << a[0] << a.size()-2  << a[a.size()-1] << endl : cout << a << endl;
    }
    
    return 0;
}