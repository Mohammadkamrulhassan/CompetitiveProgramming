/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_334
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-22 23:56:25
 * time end  :  2024-03- 23 00:18:27
*/

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int tt; cin>> tt;

    while(tt--) {
        int n; cin>>n;
        string a; cin>> a;
        string alphabet = "0abcdefghijklmnopqrstuvwxyz";
        vector<int> v(n,-1);
        for(int i=0; i<n; ++i) {
            if(a[i]=='0') {
                v[i] = 0;
                if(a[i-1] == '0') {
                    v[i-1] = -1;
                }
            }
        }
        // for(auto A : v) cout << A << ' ';cout << endl;
        for(int i=0; i<n; ++i) {
            bool oneDigit = true;
            if(i+2 < n) {
                if(v[i+2] == 0) {
                    cout << alphabet[(a[i+1] - '0') + (a[i] - '0') *10];
                    i += 2;
                    oneDigit = false;
                }
            }
            if(oneDigit) {
                cout << alphabet[a[i]-'0'];
            }
        }
        cout << '\n';
    }
}