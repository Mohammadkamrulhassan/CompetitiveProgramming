// SOE_183
// 20.01.2024

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
/**-------------------------coding start now--------------------------------------------*/ 
/**-------------------------coding start now--------------------------------------------*/ 


/**---------------------------main function----------------------------------------------*/ 

int main(void) { 
    ll t=1; 
    // cin>>t; 
    while(t--) somadan();
}




/**-------------------------this is called by main----------------------------------------*/ 

void somadan() {
    ll n=1;
    cin>>n;

    vector< pair<ll,ll> > vp(n),v;
    ff(0,n)  cin>> vp[i].first >> vp[i].second;
    sort(all(vp));

    ll mn =0L;
    ff(1,n) {
        if(vp[i].second < vp[i-1].second) {
            cout << "Happy Alex\n";
            return;
        }
    }
    cout << "Poor Alex\n";
    return;
    

}





/**-------------------------alternative---------------------------------------------------*/ 

void somadan02() {

}