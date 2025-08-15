/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_277
 * time start:  2024-02-27 00:36:48
 * time end  :  2024-02-27 00:54:08
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()

// This function called by main
void somadan() {
    ll n = 1;
    cin >> n;

    if(n== 2) {
        cout << "1\n";
        return;
    }

    else if(n%3 == 0) {
        cout << n/3 << endl;
        return;
    }
    else if(n%3 == 2) {
        cout << n/3 + 1 << endl;
        return;
    }
    else {
        int ans =0; 
        if((n-4)%3 == 0 && (n-4) >= 0 ) {
            cout << (n-4)/3 + 2 << endl;
            return;
        }
        else {
            cout << n/3 + 2 << endl;
            return;
        }
    }
  
}

int main(void) { 
    ll t = 1; 
    cin >> t; 
    while(t--) somadan();
}
