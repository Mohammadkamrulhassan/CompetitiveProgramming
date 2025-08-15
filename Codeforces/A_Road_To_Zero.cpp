/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_303
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-05 04:29:37
 * time end  :  2024-03- 05 04:38:02
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()


// This function called by main
void somadan() {
    ll x,y,a,b;
    cin>> x>> y>> a>>b;

    cout << min((min(x,y) * b),(min(x,y)*2*a)) + abs(x-y) * a << endl;

   
}


int main(void) { 
    int t = 1; 
    cin >> t; 
    while(t--) somadan();
}
