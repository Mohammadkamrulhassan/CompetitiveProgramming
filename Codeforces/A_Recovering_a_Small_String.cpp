/**
 * BISM ILLAHHIRRAHMANNI RRAHIM
 *       SOE_214
 * time:  2024-02-13 20:55:49
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
    int n = 1;
    cin >> n;

    if(n < 29) {
        cout << "aa" << (char) (n-3+'a') << endl;
        return;
    }

    if( n <54 && n > 28) {
        cout << "a" << (char) (n-2-26+'a' ) << "z" << endl;
        return;
    }
    cout << (char) (n-1+'a' - 52) << "zz" << endl;
    
}





/** ===================================== ====  alternative ==== ===================================== */ 

void somadan02() {
    ll n = 1;
    cin >> n;
}