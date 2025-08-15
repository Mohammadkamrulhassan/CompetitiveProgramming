/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_301
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-05 03:19:34
 * time end  :  2024-03- 05 03:26:18
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()


// This function called by main
void somadan() {
    int l,r; cin>> l>> r;

    if(2*l <= r) {
        cout << l << ' ' << 2*l << endl;
        return;
    }
    cout << "-1 -1\n";
    
   
}


int main(void) { 
    int t = 1; 
    cin >> t; 
    while(t--) somadan();
}