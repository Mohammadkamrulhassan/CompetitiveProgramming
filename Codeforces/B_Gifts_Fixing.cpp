// SOE_180
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
#define pl cout << endl

#define vi vector<int>
#define vl vector<ll>
#define pb push_back


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
    int n;
    cin>>n;
    vi candy(n),orange(n);
    ff(0,n) cin>> candy[i]; //sort(all(candy));
    ff(0,n) cin>> orange[i]; //sort(all(orange));
    int mn_candy =*min_element(all(candy)), mn_orange = *min_element(all(orange));
    for(int i=n-1; i>=0; --i) {
        candy[i] -= mn_candy;
        orange[i] -= mn_orange;
    }
    // ff(0,n) cout << candy[i]<< ' '; pl;
    // ff(0,n) cout <<orange[i] << ' '; pl;
    ll ans=0;
    for(int i=n-1; i>=0; --i){
        ans += max(candy[i],orange[i]);
    }
    cout << ans << endl;



}

/**-------------------------alternative---------------------------------------------------*/ 
void somadan02() {

}