// SOE_201
// 2024-01-26 22:57:55

#include <bits/stdc++.h>
using namespace std;

/**-------------------------defines---------------------------------------------------*/ 
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




/**---------------------------------function-------------------------------------------*/ 
void somadan();void somadan02();





/**-------------------------coding start now--------------------------------------------
 * -------------------------coding start now--------------------------------------------
 * -------------------------coding start now--------------------------------------------
*/ 


/**---------------------------main function----------------------------------------------*/ 

int main(void) { 
    ll t = 1; 
    cin >> t; 
    while(t--) somadan();
}




/**-------------------------this is called by main----------------------------------------*/ 

void somadan() {
    ll n = 1;
    cin >> n;
    vector<ll> ans_odd,ans_even;
    for(int i = 0; i < n; ++i) {
        ll x;
        cin>> x;
        if(i< (n/2 + n%2)){
            ans_odd.pb(x);
        } else {
            ans_even.pb(x);
        }
    }

    reverse(all(ans_even));
    // ff(0,ans_odd.size()) cout << ans_odd[i]; pl;
    // ff(0,ans_even.size()) cout << ans_even[i];
    for(int i =0; i<ans_odd.size(); ++i) {
        cout << ans_odd[i] << ' ' ;
        if(i<ans_even.size()) cout << ans_even[i] << ' ';
    }pl;
}





/**-------------------------alternative---------------------------------------------------*/ 

void somadan02() {
    ll n = 1;
    cin >> n;
}