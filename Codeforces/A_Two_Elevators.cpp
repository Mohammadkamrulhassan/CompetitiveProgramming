/**
 * BISM ILLAHHIRRAHMANNI RRAHIM
 *       SOE_213
 * time:  2024-01-30 11:30:53
*/

/** ===================================== ==== header files ==== ===================================== */ 
#include <bits/stdc++.h>
using namespace std;

/** ===================================== ======  defines ====== ===================================== */ 
#define ll long long int
#define all(a) (a).begin(),(a).end()
#define len(a) (a).size()
#define ff(x) for(int i=(x) i<(n); ++i)
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
    ll a,b,c;
    cin >> a >> b >> c;
    ll x = a-1,y;

    if(c < b) {
        y = b-1;
    }
    else {
        y = (c - b) + c - 1;
    }

    if(x < y ) {
        cout << 1 << endl;
        return;
    }
    else if(x == y) {
        cout << 3 << endl;
        return;
    }
    else 
    {
        cout << 2 << endl;
        return;
    }

    // {
    // cin>>a>>b>>c;
    // d=a-1;
    // e=abs(b-c)+c-1;
    // cout<<(d<e?1:(d>e?2:3))<<endl;
    // }

    // if(c < b) {
    //     cout << min(b,a) << endl;
    //     return;
    // }
    // else if()
    // else cout << a << endl;
    // return;
}





/** ===================================== ====  alternative ==== ===================================== */ 

void somadan02() {
    ll n = 1;
    cin >> n;
}