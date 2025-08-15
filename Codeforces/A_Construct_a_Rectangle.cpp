/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_333
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-22 23:42:12
 * time end  :  2024-03- 22 23:52:45
*/

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int tt; cin>>tt; 
    while(tt--) {
        vector<int> l(3); cin>> l[0] >> l[1] >> l[2];
        sort(l.begin(),l.end());

        if((l[0]==l[1] && l[2]%2 == 0) ||( l[0]%2 == 0) && l[1]==l[2] || (l[0]+l[1] == l[2])) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}