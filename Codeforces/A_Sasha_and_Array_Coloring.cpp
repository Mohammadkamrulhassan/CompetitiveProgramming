/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *       SOE_217
 * time:  2024-02-14 23:03:20
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
    cin >> t; 
    while(t--) somadan();
}




/** ===================================== this is called by main ===================================== */ 

void somadan() {
    ll n = 1;
    cin >> n;
    
    vector<ll> v(n);
    
    ff(0,n) cin>> v[i];sort(all(v));        // 1 3 4 5 6    5-1 + 6-3

    ll sum =0;
    ff(0,n/2) {
        sum += (v[n-1-i] - v[i]);
    }
    cout << sum << endl;
    return;

}





/** ===================================== ====  alternative ==== ===================================== */ 

void somadan02() {
    ll n = 1;
    cin >> n;
}