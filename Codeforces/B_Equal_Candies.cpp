// SOE_175
// 19.01.2024

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
#define el cout << endl

#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define vout ff(0,v.size()) cout << v[i] << ' '; el


/**---------------------------------function-------------------------------------------*/ 
void somadan();void somadan02();



/**-------------------------coding start now--------------------------------------------*/ 
int main(void) { 
    ll t=1; 
    cin>>t; 
    while(t--) somadan();
}

/**-------------------------this is called by main----------------------------------------*/ 
void somadan() {
    int n=1;
    cin>>n;

    vi v(n);
    ff(0,n) cin>> v[i];

    int ans=0,mn = *min_element(all(v));
    ff(0,n) ans += (v[i]-mn);

    cout << ans << endl;
    
}

/**-------------------------alternative---------------------------------------------------*/ 
void somadan02() {

}