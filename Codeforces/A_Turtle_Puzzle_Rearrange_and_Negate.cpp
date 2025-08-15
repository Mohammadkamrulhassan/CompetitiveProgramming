/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_280
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-02-27 20:48:46
 * time end  :  2024-02-27 20:48:48  
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()


// This function called by main
void somadan() {
    int n; cin>> n;
    int sum =0;

    for(int i=0; i<n; ++i) {
        int a; cin>> a;

        sum += abs(a);
    }
    cout << sum << endl;
  
}

int main(void) { 
    ll t = 1; 
    cin >> t; 
    while(t--) somadan();
}
