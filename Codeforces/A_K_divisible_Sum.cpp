/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *           :  SOE_271
 * time start:  2024-02-25 01:00:29
 * time end  :  2024-02-25 02:26:20
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()
#define yes(b) b ? cout << "YES\n" : cout << "NO\n"

// This function called by main
void somadan() {
    int n,k; 
    cin>> n>> k;

    if(!(n%k)) {
        cout << 1 << endl;
    }
    else if(n<k) {
        cout << k/n + (bool) (k%n) << endl;
    }
    else {
        cout << 1 + (bool) (n%k) << endl;
    }
}

int main(void) { 
    ll t = 1; 
    cin >> t; 
    while(t--) somadan();
}
