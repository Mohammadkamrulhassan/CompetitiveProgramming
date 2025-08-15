/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *       SOE_216
 * time:  2024-02-14 23:02:25
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

    if(!(n%3)) {        //9     4 3 2
        cout << (n/3) << ' ' << (n/3) + 1 << ' ' << (n/3) - 1 ; pl;
    }
    else if(n%3 == 1) { //10    4 4 3
        cout << (n/3) << ' ' << (n/3) + 2 << ' ' << (n/3) - 1 ; pl;
    }
    else if(n%3 == 2) { //11
        cout << (n/3) + 1 << ' ' << (n/3) + 2 << ' ' << (n/3) - 1 ; pl;
    }
}





/** ===================================== ====  alternative ==== ===================================== */ 

void somadan02() {
    ll n = 1;
    cin >> n;
}