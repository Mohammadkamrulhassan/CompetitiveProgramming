/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_284
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  28-February-2024 01:55:58
 * time end  :  2024-02-28 02:08:28
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()


// This function called by main
void somadan() {
    ll m,n; cin>> n>>m;

    if(n== 1) cout << "0\n";
    else if(n==2) cout << m << '\n';
    else cout << m*2 << '\n';
    
}


int main(void) { 
    int t = 1; 
    cin >> t; 
    while(t--) somadan();
}
