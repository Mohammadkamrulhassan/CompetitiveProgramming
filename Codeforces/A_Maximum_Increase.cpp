// SOE_198
// 2024-01-25 23:47:41

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
    // cin >> t; 
    while(t--) somadan();
}




/**-------------------------this is called by main----------------------------------------*/ 

void somadan() {
    ll n = 1;
    cin >> n;

    int cnt =1, ans = 1; 
    ll temp;
    cin>> temp;
    n--;

    while(n--) {
        ll x;
        cin>> x;

        temp < x ? cnt++ : cnt = 1;
        temp = x;ans = max(cnt,ans);
        
    }
    cout << ans << endl;

}





/**-------------------------alternative---------------------------------------------------*/ 

void somadan02() {
    ll n = 1;
    cin >> n;
}