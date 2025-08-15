/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_29
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-01 00:33:53
 * time end  :   
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()


// This function called by main
void somadan() {
    ll n = 1;
    cin >> n;
    
    ll N=(ll) 1e6;
    cout << "codeforce";
    string s(N,'s');

    // 1 to 1e6 / n%1e6
    cout << s.substr(0,(n% (ll)1e6));

    ll test = n/ (ll)1e6;
    for(int i=1; i<(ll)1e6 && test>0; ++i,test--) {
        cout << s ;
    }
    for(int i=1; i<(ll)1e6 && test>0; ++i,test--) {
        cout << s ;
    }
    cout << endl;

}


int main(void) { 
    int t = 1; 
    // cin >> t; 
    while(t--) somadan();
}
