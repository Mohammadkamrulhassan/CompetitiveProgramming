/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_273
 * time start:  2024-02-25 05:10:42
 * time end  :  2024-02-25 05:32:03
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()

// This function called by main
void somadan() {
    string a; cin>> a;

    for(int i=0; i<a.size(); ++i) {
        if(i == 0) {
            if(a[i] != '1') { 
                cout << "NO\n";
                return;
            } 
        }
        if(i<3) {
            if(a[i] == '1' || a[i] == '4') {
                
            }
            else {
                cout << "NO\n";
                return;
            }
        }
        else if(a[i]=='1' || (a[i-1]=='1' && a[i]=='4') || (a[i-2]=='1' && a[i-1]=='4' && a[i]=='4')) {
            continue;
        }
        else {
            cout << "NO\n"; 
            return;
        }
    }

    cout << "YES\n"; 
    return;
  
}

int main(void) { 
    ll t = 1; 
    // cin >> t; 
    while(t--) somadan();
}
