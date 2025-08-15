/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_318
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-16 23:22:02
 * time end  :  2024-03- 16 23:43:59
*/

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    
    int tt; cin>>tt;

    while(tt--) {
        int n,k; cin>> n>>k;
        k < (n-1) ? cout << n << '\n' : cout << "1\n"; 
    }
}