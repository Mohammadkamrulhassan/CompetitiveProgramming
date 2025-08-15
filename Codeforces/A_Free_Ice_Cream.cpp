/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_230
 * time start:  2024-02-16 03:13:53
 * time end  :  2024-02-16 03:25:42
*/

/** ===================================== ==== header files ==== ===================================== */ 
#include <bits/stdc++.h>
using namespace std;

/** ===================================== ======  defines ====== ===================================== */ 
#define ll long long int
#define all(a) (a).begin(),(a).end()
#define len(a) (a).size()
#define ff(x,n) for(int i=(x); i<(n); ++i)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define hibi cout << " t \n"
#define pl cout << endl

#define vi vector<int>
#define vl vector<ll>
#define pb push_back




/** ===================================== ====== function ====== ===================================== */ 
void somadan();void somadan02();





/**
 * ===================================== == coding start now == =====================================
 * ===================================== == coding start now == =====================================
 * ===================================== == coding start now == =====================================
*/


/** ===================================== ===  main function === ===================================== */ 

int main(void) { 
    ll t = 1; 
    // cin >> t; 
    while(t--) somadan();
}




/** ===================================== this is called by main ===================================== */ 

void somadan() {
    ll n = 1,m;
    cin >> n >> m;
    ll ans2nd =0;

    for(ll i=0; i<n; ++i) {
        ll x; char a; cin>>a >>x;

        (a== '+') ? m +=x : ( (m<x) ? ans2nd++ :m -= x);
    }

    cout << m << ' ' << ans2nd;
}





/** ===================================== ====  alternative ==== ===================================== */ 

void somadan02() {
    ll n = 1;
    cin >> n;
}