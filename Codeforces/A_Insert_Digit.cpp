//SOE_06
//02.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int tt; cin>> tt;

    while (tt--) {
        int n;char insert_digit; cin>> n >> insert_digit;

        string str; cin>> str; bool done = true; string ans;

        int i=0;
        for( i=0; i<n; ++i) {
            if(str[i] < insert_digit) {
                ans += insert_digit; ans += str[i];
                done = false;
                break;
            }
            else ans += str[i];
        }
        if(done) ans += insert_digit;
        else ans += str.substr(i+1);

        cout << ans << endl;

    }

    return 0;
}