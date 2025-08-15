/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_265
 * time start:  2024-02-22 01:12:20
 * time end  :  2024-02-22 01:31:23
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()
#define yes(b) b ? cout << "YES\n" : cout << "NO\n"

// This function called by main
void somadan() {
    ll n,k;
    cin >> n>> k; 
    
    yes( (n%2 == k%2 && k*k <= n) );
  
}

int main(void) { 
    ll t = 1; 
    cin >> t; 
    while(t--) somadan();
}
