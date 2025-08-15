/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_283
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  28-February-2024 01:31:46
 * time end  :  2024-02-28 01:44:12
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()


// This function called by main
void somadan() {
    int n = 1;
    cin >> n;
    
    
    int ans =0;
    for(int i=0; i<n; ++i) {
        int x,y; cin>> x>> y;

        if(x>y) ans ++;
    }

    cout << ans << '\n';
    
}


int main(void) { 
    int t = 1; 
    cin >> t; 
    while(t--) somadan();
}