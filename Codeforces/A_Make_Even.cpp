/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_309
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-13 11:55:01
 * time end  :  2024-03- 13 12:06:12
*/

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int tt; cin>>tt;
    while(tt--) {
        string n; cin>> n;

        if((n[n.size()-1] - '0')%2 == 0) {
            cout << "0\n";
        }
        else if((n[0]-'0')%2 == 0) {
            cout << "1\n";
        }
        else {
            bool two = true;
            for(int i=0; i<n.size(); ++i) {
                if((n[i]-'0')%2 == 0) {
                    cout << "2\n";
                    two = false;
                    break;
                }
            }
            if(two) {
                cout << "-1\n";
            }
        }
    }
}