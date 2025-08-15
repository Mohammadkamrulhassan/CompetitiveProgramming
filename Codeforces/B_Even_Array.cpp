//SOE_136
//06.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int tt; cin>> tt;int cnt=0;
    while(tt--) {
        int n; cin>> n; int odd = 0,even = 0;
        for(int i=0; i<n; ++i) {
            int x; cin>> x;
            if(i%2 == 0) {
                if(x%2 != 0) {
                    odd++;
                }
            }
            else {
                if(x%2 == 0) {
                    even++;
                }
            }
        }
        odd == even ? cout << odd << endl : cout << "-1\n";
    }
    return 0;
}