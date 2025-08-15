/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_222
 * time start:  2024-02-15 21:58:57
 * time end  :  2024-02-15 22:03:25
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

    ll mn =(ll)INT_MAX,mx=0;

    while(n--) {
        ll x; cin>> x;

        if(mn > x) {
            mn = x;
        }
        if(mx < x) {
            mx = x;
        }
    }

    cout << mx - mn << endl;
}





/** ===================================== ====  alternative ==== ===================================== */ 

void somadan02() {
    ll n = 1;
    cin >> n;
}