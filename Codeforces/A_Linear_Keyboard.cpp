/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_228
 * time start:  2024-02-16 02:42:40
 * time end  :  2024-02-16 03:00:42
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
    string a,b;
    cin>> a>>b;

    string c ="";
    c+=b[0];
    for(int i=1; i<b.size(); ++i) {
        if(b[i] != b[i-1]) c +=b[i];
    }

    int ans =0;
    vi v;

    for(int i=0; i<c.size(); ++i) {
        for(int j=0; j<26; ++j) {
            if(c[i] == a[j]) {
                v.pb(j+1);
                break;
            }
        }
    }
    for(int i=0; i<c.size()-1; ++i) {
        ans += abs(v[i] -v[i+1]);
        // cout << v[i] << ' ';
    }
    cout << ans << endl;
}





/** ===================================== ====  alternative ==== ===================================== */ 

void somadan02() {
    ll n = 1;
    cin >> n;
}